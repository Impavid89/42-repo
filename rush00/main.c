/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:24:27 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/18 10:01:09 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush(int x, int y);
void topline(int width);
void middleline(int width);
void underline(int width);

int 	main(void)
{
	rush(5, 3);
	return(0);
}
