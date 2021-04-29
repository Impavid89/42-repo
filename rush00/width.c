/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:12:17 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/17 15:06:56 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void topline(int width)
{
	char star;
	char slash;
	char otherslash;
	int i;
	
	star = '*';
	slash = '/';
	otherslash = '\\';
	i = 1;
	
	while (i<=width)
	{
		if (i == 1)
		{
			write(1, &slash, 1);
		}
		else if (i == width)
			{
				write (1, &otherslash, 1);
			}
		else
		{
			write(1, &star, 1);
		}
	i++;	
	}
	write (1, "\n", 1);
}

void middleline(int width)
{
	char star;
	char empty;
	int i;
	
	star = '*';
	empty = ' ';
	i = 1;
	
	while (i<=width)
	{
		if (i == 1 || i == width)
		{
			write(1, &star, 1);
		}
		else 
		{
			write(1, &empty, 1);
		}
	i++;
	}
	write (1, "\n", 1);
}

void underline(int width)
{
	char star;
	char slash1;
	char slash2;
	int i;

	star ='*';
	slash1 ='\\';
	slash2 ='/';
	i = 1;

	while (i<= width)
	{
		if (i == 1)
		{
			write(1, &slash1, 1);
		}
		else if (i == width)
			{
				write(1, &slash2, 1);	
			}
		else
		{
			write(1, &star, 1);
		}
	i++;
	}
	write(1, "\n", 1);	
}
