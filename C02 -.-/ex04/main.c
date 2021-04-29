/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:26:33 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 16:35:52 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int		main(void)
{
	char str[20] = "Hello";
	printf("%d\n", ft_str_is_lowercase(str));
	return(0);
}