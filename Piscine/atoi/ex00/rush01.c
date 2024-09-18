/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoivone <atoivone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:04:43 by atoivone          #+#    #+#             */
/*   Updated: 2024/02/18 16:14:36 by atoivone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y)
{
	int	length;
	int	width;

	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((length == 1 && width == 1) || (length == y && width == x))
				ft_putchar('/');
			else if ((length == 1 && width == x) || (length == y && width == 1))
				ft_putchar('\\');
			else if (length == 1 || length == y || width == 1 || width == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
