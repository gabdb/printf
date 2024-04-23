/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:03:16 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/23 16:03:16 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_char(const char **dptr_format, int *ptr_count, va_list *args_ptr)
{
	char	c;

	c = (char)va_arg(*args_ptr, int);
	write(1, &c, 1);
	(*dptr_format)++;
	(*ptr_count)++;
}