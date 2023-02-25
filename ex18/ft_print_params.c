/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:23:02 by ekantane          #+#    #+#             */
/*   Updated: 2021/11/02 19:41:26 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
			ft_putchar(*argv[i]++);
		i++;
		ft_putchar('\n');
	}
}
