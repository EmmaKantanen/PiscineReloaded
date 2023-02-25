/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:24:39 by ekantane          #+#    #+#             */
/*   Updated: 2021/11/01 21:10:47 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	tab = 0;
	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (len + 1));
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
