/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:23:51 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/17 15:33:36 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void topline(int width);
void middleline(int width);
void underline(int width);

void rush(int x, int y)
{
	int count;
	
	count = 1;
	
	while (count<=y)
	{
		if (count == 1)
		{
			topline(x);
		}
		else if (count == y)
		{
			underline(x);
		}
		else
		{
			middleline(x);	
		}
	count++;	
	}
}
