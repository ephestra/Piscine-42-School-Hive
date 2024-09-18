/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:58:15 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/03 19:59:11 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct	s_dictionary
{
	int		number_digits;
	char	*number_spelled;
};
int	main(void)
{
	struct s_dictionary	number0;
	struct s_dictionary	number1;
	struct s_dictionary	number2;
	struct s_dictionary	number3;
	struct s_dictionary	number4;
	number0.number_digits = 0;
	number0.number_spelled = "zero";
	number1.number_digits = 1;
	number1.number_spelled = "one";
	number2.number_digits = 2;
	number2.number_spelled = "two";
	number3.number_digits = 3;
	number3.number_spelled = "three";
	number4.number_digits = 4;
	number4.number_spelled = "four";
	return (0);
}
