/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:38:36 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/22 14:56:11 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z' ))
			return (0);
		i++;
	}
	return (1);
}

/*int main (void)
{
	char x[] = "hive";
	char y[]="HIve";
	char z[]="";
	printf("%d\n", ft_str_is_lowercase(x));
	printf("%d\n", ft_str_is_lowercase(y));
	printf("%d\n", ft_str_is_lowercase(z));
	return (0);
}*/
