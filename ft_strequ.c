/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 12:00:50 by pbompard          #+#    #+#             */
/*   Updated: 2015/01/27 12:02:01 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strequ(char const *s1, char const *s2)
{
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if ((unsigned char)*s1 - (unsigned char)*s2 != 0)
			return (0);
		s1++;
		s2++;
		if ((*s1 == '\0') && (*s2 == '\0'))
			return (1);
	}
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	return (0);
}
