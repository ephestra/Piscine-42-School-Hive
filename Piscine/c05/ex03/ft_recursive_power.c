/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:08:39 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/06 11:43:55 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
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
	power, ft_recursive_power(num ,power));
	return (0);
}*/
