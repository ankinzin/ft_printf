/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:03:36 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/15 16:25:18 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfx(unsigned long number, char c)
{
	char	*basehex;
	int		count;

	count = 0;
	if (c == 'x')
		basehex = "0123456789abcdef";
	else
		basehex = "0123456789ABCDEF";
	if (number < 16)
		count += ft_printfc(*(basehex + number));
	else
	{
		count += ft_printfx((number / 16), c);
		count += ft_printfx((number % 16), c);
	}
	return (count);
}
