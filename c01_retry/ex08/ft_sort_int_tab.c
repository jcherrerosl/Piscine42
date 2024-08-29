/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:24:17 by juanherr          #+#    #+#             */
/*   Updated: 2024/08/13 15:24:18 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	temp = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
/*
int	main()
{
	int	j;
	int	size;

	int	tab[8] = {1, 45, 3, 12, 25, 18, 60, 7};

	j = 0;
	size = 8;
	ft_sort_int_tab(tab, size);
	while (j < size)
	{
		printf("%d\t", tab[j]);
		j++;
	}
}*/
