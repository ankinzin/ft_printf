/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:03:15 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/15 19:31:53 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfp(unsigned long number)
{
	int	count;

	count = 0;
	count += ft_printfs("0x");
	count += ft_printfx(number, 'x');
	return (count);
}
