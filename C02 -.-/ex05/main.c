/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:39:51 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 16:48:57 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int		main(void)
{
	char str[20] = "hello";
	printf("%d\n", ft_str_is_uppercase(str));
	return(0);
}