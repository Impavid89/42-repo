/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkincal <mkincal@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:18:59 by mkincal           #+#    #+#             */
/*   Updated: 2021/04/28 15:11:06 by mkincal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int		main(void)
{
	char str[20] = "9";
	printf("%d\n", ft_str_is_alpha(str));
	return(0);
}