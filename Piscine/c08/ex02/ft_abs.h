/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:20:50 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/07 11:20:17 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ft_abs(Value)

int	ft_abs(int Value)
{
	if (Value >= 0)
		return (Value);
	else
		return (-Value);
}
#endif
