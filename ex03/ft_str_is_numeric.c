/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:12:53 by soilee            #+#    #+#             */
/*   Updated: 2020/07/13 18:44:49 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int str_len;
	int count;

	i = 0;
	str_len = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			count++;
		}
		str_len++;
		i++;
	}
	if ((count == str_len) || (str[0] == '\0'))
		return (1);
	else
		return (0);
}
