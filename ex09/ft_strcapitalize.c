/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:05:23 by soilee            #+#    #+#             */
/*   Updated: 2020/07/15 20:22:30 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		front_check(char *str, int i)
{
	i -= 1;
	if (str[i] >= 'a' && str[i] <= 'z')
		return (0);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (0);
	else if (str[i] >= '0' && str[i] <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (front_check(str, i))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
