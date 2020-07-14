/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 21:22:18 by soilee            #+#    #+#             */
/*   Updated: 2020/07/14 12:52:36 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	hex_to_char(int n)
{
	if (n < 10)
		return (n + 48);
	else
		return (n + 87);
}

void	print_hex(unsigned char c)
{
	unsigned char hex;

	write(1, "\\", 1);
	hex = hex_to_char(c / 16);
	write(1, &hex, 1);
	hex = hex_to_char(c % 16);
	write(1, &hex, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
			print_hex(str[i]);
		i++;
	}
}
