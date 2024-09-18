/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:18:23 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/27 21:30:24 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > 9 )
		{
			ft_putnbr(nb / 10);
		}
		digit = nb % 10 + '0';
		write (1, &digit, 1);
	}
}
/*int main(void)
{
	int	nb;
	nb = -325;
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}*/
