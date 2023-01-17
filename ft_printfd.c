/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:35:23 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/10 11:40:26 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfd(long number)
{
	int		count;

	count = 0;
	if (number < 0)
	{
		number *= -1;
		count += ft_printfc('-');
	}
	if (number < 10)
		count += ft_printfc(number + '0');
	else
	{
		count += ft_printfd(number / 10);
		count += ft_printfd(number % 10);
	}
	return (count);
}
