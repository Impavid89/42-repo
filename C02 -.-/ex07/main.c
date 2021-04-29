/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:55:06 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 20:12:33 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int		main(void)
{
	char str[20] = "david is nice";
	printf("%s\n", ft_strupcase(str));
	return(0);
}