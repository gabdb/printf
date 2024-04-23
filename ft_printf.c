/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnyssens <gnyssens@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:58:38 by gnyssens          #+#    #+#             */
/*   Updated: 2024/04/23 15:58:38 by gnyssens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	simply_write(const char **dptr_format, int *count_ptr)
{
	write(1, *dptr_format, 1);
	(*dptr_format)++;
	(*count_ptr)++;
}

void	specifier(const char **dptr_format, int *count_ptr, va_list *args_ptr)
{
	(*dptr_format)++;
	if (*(*dptr_format) == 'c')
		write_char(dptr_format, count_ptr, args_ptr);
	// else if ... else if ...
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format != '%')
			simply_write(&format, &count);
		else
			specifier(&format, &count, &args);
	}

	va_end(args);
	return (count);
}