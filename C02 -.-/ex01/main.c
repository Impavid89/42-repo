/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:52:03 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/29 09:10:46 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "Textisfeiowpgn";
	char src[] = "Hello";
	ft_strncpy(dest, src, 6);
	printf("%s\n",ft_strncpy(dest, src, 6));
}