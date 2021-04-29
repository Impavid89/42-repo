/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:11:26 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 19:49:25 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int		main(void)
{
	char str[20] = "jkl";
	printf("%d\n", ft_str_is_numeric(str));
	return(0);
}