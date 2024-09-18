/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:22:58 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/06 10:14:05 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = max - min;
	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (i));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h> 
int main(void)
{
	int min;
	int max;
	int *tab;
	int i  = 0;
	int size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min ,max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
    return 0;
}*/
