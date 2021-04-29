/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 08:43:05 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/17 10:37:11 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop(int x, int y)
{
	int try;
	char stern;
	int count;
	char slash;
	
	try = 1;
	stern = '*';
	slash = '/';
	count = 1;
	while (count<=y)
	{
			while(try<=x)
			{
			write(1, &stern, 1);
			try++;
			}
		}
	
	write(1, "\n", 1);
	try = 1;
	count++;
	}
}
