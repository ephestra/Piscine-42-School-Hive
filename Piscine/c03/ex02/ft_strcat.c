/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:17:49 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/26 15:37:57 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
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
	char dest_1[30] = "You";
	char src_1[] = "can do it";
	char dest_2[30] = "You";
	printf("%s\n", ft_strcat(dest_1, src_1));
	printf("%s\n", strcat(dest_2, src_1));
	return 0;
}*/
