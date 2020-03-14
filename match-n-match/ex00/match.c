/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 03:51:14 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/09 05:51:00 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s2 == '*')
		{
			while (*s2 == '*')
				s2++;
			if (!*s2)
				return (1);
			while (*s1)
				if (match(s1++, s2))
					return (1);
			return (0);
		}
		else if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	while (*s2 == '*')
		s2++;
	return (!*s2);
}