/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:55:00 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 20:02:41 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int		main(void)
{
	char str[20] = "123";
	printf("%d\n", ft_str_is_printable(str));
	return(0);
}