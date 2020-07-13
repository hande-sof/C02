/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:34:18 by soilee            #+#    #+#             */
/*   Updated: 2020/07/13 21:17:16 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int int_size;

	i = 0;
	int_size = (int)size;
	while (i <= int_size && src[i] != '\0')
	{
		if (i < int_size)
			dest[i] = src[i];
		else if (i == int_size)
			dest[i] = '\0';
		i++;
	}
	return (i);
}