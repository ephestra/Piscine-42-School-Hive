/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:28:17 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/01 19:50:26 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_nbr(int nbr)
{
    if(nbr >= 0 && nbr <10 )
     {
		nbr += 48;
        write(1, &nbr, 1);
	 }
    else
	{
    	ft_nbr(nbr / 10);
    	ft_nbr(nbr % 10);
	}
}

int main() {
    int i = 1;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_nbr(i);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
