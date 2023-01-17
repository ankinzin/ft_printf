/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkspecifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:34:42 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/15 16:18:50 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_checkspecifier(char xar)
{
	char	*specifier;
	int		i;

	i = 0;
	specifier = "cspdiuxX%";
	while (*(specifier + i))
	{
		if (xar == *(specifier + i))
			return (*(specifier + i));
		i++;
	}
	return (0);
}
