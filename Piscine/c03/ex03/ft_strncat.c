/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:06:17 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/27 22:52:56 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int main(void)
{
	char src_1[] = "feel me";
	char dest_1[30] = "Can you";
	char dest_2[30] = "Can you";
	printf("%s\n", ft_strncat(dest_1, src_1, 3));
	printf("%s\n", strncat(dest_2, src_1, 3));
	return 0;
}*/
