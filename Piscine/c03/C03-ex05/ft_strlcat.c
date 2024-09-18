/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:50:37 by tpolat            #+#    #+#             */
/*   Updated: 2024/02/26 13:41:36 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				destlen;
	int				srclen;
	int				totallen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	totallen = destlen + srclen;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (totallen);
}
/*
int main() {
    char dest1[10] = "Hello";
    char dest2[10] = "Hello";
    char src[] = "World!";
    size_t result = ft_strlcat(dest1, src, 7);

    printf("Result: %zu\n", result);
    printf("Concatenated string: %s\n\n", dest1);
    printf("System=%lu\n", strlcat(dest2, src, 7));
    printf("System Concatenated string: %s\n", dest2);
    return 0;
}
*/{
