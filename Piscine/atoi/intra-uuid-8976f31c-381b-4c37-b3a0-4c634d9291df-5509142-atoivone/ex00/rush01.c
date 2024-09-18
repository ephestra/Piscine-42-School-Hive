/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoivone <atoivone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:41:12 by atoivone          #+#    #+#             */
/*   Updated: 2024/02/17 17:14:15 by atoivone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putline(char start, char end, char fill, int length)
	{
	int	i;

	ft_putchar(start);
	i = 0;
	while (i < length - 2)
	{
		ft_putchar (fill);
		i++;
	}
	if (length >= 2)
		ft_putchar (end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	length;

	if (x <= 0 || y <= 0)
		return ;
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_putline('/', '\\', '*', x);
		else if (length == 1)
			ft_putline('\\', '/', '*', x);
		else
			ft_putline('*', '*', ' ', x);
		length -= 1;
	}
}
