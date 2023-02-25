/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:08:34 by ekantane          #+#    #+#             */
/*   Updated: 2021/11/01 21:12:08 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 1)
		return (1);
	while (i <= nb)
	{
		j = j * i;
		i++;
	}
	return (j);
}
