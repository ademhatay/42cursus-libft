/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:46:31 by ahatay            #+#    #+#             */
/*   Updated: 2022/02/10 10:44:40 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0')
		&& (c < n - 1))
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
