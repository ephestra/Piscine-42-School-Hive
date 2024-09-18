/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:47:23 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/06 00:37:00 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(*src) * (i + 1));
	if (dest == NULL)
		return (NULL);
	else
	{
		j = 0;
		while (src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
		return (dest);
	}
}
/*#include <stdio.h>
int main(void)
{
    char src_1[] = "xyzabckif";
    char *duplicate = ft_strdup(src_1);
    if (duplicate == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("%s\n", duplicate);
    free(duplicate); // Don't forget to free the allocated memory
    return 0;
}*/
