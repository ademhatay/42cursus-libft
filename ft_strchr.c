/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:31:39 by ahatay            #+#    #+#             */
/*   Updated: 2022/02/23 16:15:05 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (counter <= ft_strlen(s))
	{
		if (s[counter] == (unsigned char)c)
			return ((char *)s + counter);
		counter++;
	}
	return (0);
}
