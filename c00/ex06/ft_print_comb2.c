/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:47:27 by juanherr          #+#    #+#             */
/*   Updated: 2024/08/11 14:47:31 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 2);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == 9 + '0' && b == 8 + '0'
			&& c == 9 + '0' && d == 9 + '0'))
		write(1, ", ", 2);
}

void	ft_whiles(char a, char b, char c, char d)
{
	a = 0 + '0';
	while (a <= 9 + '0')
	{
		b = 0 + '0';
		while (b <= 9 + '0')
		{
			c = a;
			while (c <= 9 + '0')
			{
				d = b + 1;
				while (d <= 9 + '0')
				{
					ft_write(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	ft_whiles(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
