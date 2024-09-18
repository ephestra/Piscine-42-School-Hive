/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:59:09 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/27 22:19:54 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Helloo";

	printf("%d\n", ft_strncmp(s1, s2, 8));
	char s1_1[] = "Hello";
	char s2_2[] = "Helloo";

	printf("%d\n", strncmp(s1_1, s2_2, 8));
	return (0);
}*/
