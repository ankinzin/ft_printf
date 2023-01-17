/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:35:07 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/15 16:22:37 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printfd(long number);
int		ft_printfx(unsigned long number, char c);
int		ft_printfc(char c);
int		ft_printfs(char *str);
int		ft_printfu(unsigned int number);
int		ft_printfp(unsigned long number);
char	ft_checkspecifier(char xar);

#endif
