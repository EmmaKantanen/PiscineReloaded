/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:20:48 by ekantane          #+#    #+#             */
/*   Updated: 2021/11/04 13:54:17 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_display_file(char *av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(av, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (close (fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	close (fd);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	else
	{
		ft_display_file(av[1]);
	}
	return (0);
}
