/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 20:17:12 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 20:19:45 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int		main(void)
{
	char str[20] = "DAVID IS NICE";
	printf("%s\n", ft_strlowcase(str));
	return(0);
}