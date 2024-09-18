/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:30:41 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/06 10:26:21 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int	calc_size(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		len;
	int		a;

	a = 0;
	if (size == 0)
	{
		return ((char *)malloc(sizeof(char)));
	}
	len = calc_size(strs, sep, size);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	a = 0;
	ptr[0] = 0;
	while (a < size)
	{
		ft_strcat(ptr, strs[a]);
		if (a < size - 1)
			ft_strcat(ptr, sep);
		a++;
	}
	ptr[len] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int main()
{
	char *str[] = {"this1$", "that$", "join3$"};

	printf("%s", ft_strjoin(3, str, "--o--"));
	return (0);
}*/
