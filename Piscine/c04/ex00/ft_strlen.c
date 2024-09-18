/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:02:12 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/27 21:41:15 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
 #include <stdio.h>
 #include <string.h>*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	char str_1[]= "This is a string";
	printf("%d\n", ft_strlen(str_1));
	return (0);
}*/
