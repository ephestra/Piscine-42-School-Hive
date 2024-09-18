/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:21:58 by tpolat            #+#    #+#             */
/*   Updated: 2024/03/03 15:39:45 by tpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h> 

struct nmb_let 
{
	char let[];
	int nbr;

struct nbr_let dictionary[];    

// Function to open the dictionary file
    int file = open(dictionary.c, O_RDONLY);
    if (file == -1) {
        perror("Error opening file");
    }
    return file;
}

// Function to close the dictionary file
void closeDictionary(int file) {
    if (file != -1) {
        close(file);
    }
}
