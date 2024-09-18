/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:58:06 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/29 14:30:09 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;
	
	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 ||( str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
		{
            if (str[i] == '-')
            {
                sign *= -1;
                
            }
			i++;
		}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 +(str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main(void)
{
	char str[] = "  ---+--+1234ab567";
	printf("%d", ft_atoi(str));
			return (0);
}
