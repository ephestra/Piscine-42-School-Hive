/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:58:04 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/22 16:50:00 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' ))
			return (0);
		i++;
	}
	return (1);
}

/*int main (void)
{
	char x[] = "hive";
	char y[]="HIVE";
	char z[]="";
	printf("%d\n", ft_str_is_uppercase(x));
	printf("%d\n", ft_str_is_uppercase(y));
	printf("%d\n", ft_str_is_uppercase(z));
	return (0);
}*/
