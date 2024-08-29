/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:18:12 by juanherr          #+#    #+#             */
/*   Updated: 2024/08/28 20:18:13 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	diff;

	i = 0;
	if (min > max)
		return (0);
	diff = max - min;
	array = malloc(diff * sizeof(int));
	if (!array)
		return (0);
	while (i < diff)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
