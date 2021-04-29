/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:03:47 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 13:38:51 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int		main(void)
{

	char dest[] = "Texti";
	char src[] = "Hello";
	ft_strcpy(dest, src);
	printf("%s\n",ft_strcpy(dest, src));
}