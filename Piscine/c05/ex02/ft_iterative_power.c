/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:57:33 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/04 16:52:15 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		j *= nb;
		i++;
	}
	return (j);
}
/*int main(void)
{
	int  num;
	int power;
	
	printf("Number:");
	scanf("%d", &num);
	printf("Power:");
	scanf("%d", &power);
	printf("%d to the power %d is %d\n" ,num , 
	power, ft_iterative_power(num ,power));
	return (0);
}*/
