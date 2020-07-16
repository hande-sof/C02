/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 19:47:02 by soilee            #+#    #+#             */
/*   Updated: 2020/07/16 16:51:13 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				null_check;

	i = 0;
	null_check = 0;
	while (i < n)
	{
		if (src[i] == '\0' || null_check == 1)
		{
			dest[i] = '\0';
			null_check = 1;
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
