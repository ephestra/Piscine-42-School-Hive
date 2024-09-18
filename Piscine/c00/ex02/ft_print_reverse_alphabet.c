/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:15:36 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/15 21:10:12 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	revalpha;

	revalpha = 'z';
	while (revalpha >= 'a')
	{
		write(1, &revalpha, 1);
		revalpha--;
	}
}
