/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 23:00:38 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/25 09:47:08 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*int main (void)
{
	char x[] = "Hive";
	char y[] = "1546";
	char z[] = "";
	printf("%d\n", ft_str_is_numeric(x));
	printf("%d\n", ft_str_is_numeric(y));
	printf("%d\n", ft_str_is_numeric(z));
}*/
