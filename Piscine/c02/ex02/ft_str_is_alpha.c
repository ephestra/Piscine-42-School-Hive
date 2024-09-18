/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:45:42 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/22 18:44:11 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z' )))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main(void)
{
	char str_1[] = "Terve";
	int output = ft_str_is_alpha(str_1);
	printf("%d\n", output);
	return (0);
}*/
