/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:44:45 by soilee            #+#    #+#             */
/*   Updated: 2020/07/14 12:54:52 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	printf("%s\n", "Coucou\ntu vas bien ?");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n\n");
	return (0);
}
