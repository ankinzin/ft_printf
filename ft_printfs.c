/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:03:23 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/15 16:24:22 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfs(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
		return (ft_printfs("(null)"));
	while (*(str + i))
	{
		ft_printfc(*(str + i++));
		count++;
	}
	return (count);
}
