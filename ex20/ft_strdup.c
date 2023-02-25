/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:33:22 by ekantane          #+#    #+#             */
/*   Updated: 2021/11/01 21:10:57 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*dup;
	char	*dup_offset;

	src_size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * src_size + 1);
	if (dup == '\0')
		return ((char *) '\0');
	dup_offset = dup;
	while (*src)
	{
		*dup_offset = *src;
		dup_offset++;
		src++;
	}
	*dup_offset = '\0';
	return (dup);
}
