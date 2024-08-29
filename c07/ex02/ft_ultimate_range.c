/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:29:01 by juanherr          #+#    #+#             */
/*   Updated: 2024/08/29 11:29:03 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	void	*array;
	int	i;

	array = (int *)malloc(range * sizeof(int));
	if (!array)
		return (-1);
	if (min >= max)
		range = 0;
	
}
