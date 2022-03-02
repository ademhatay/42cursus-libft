/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:06:19 by ahatay            #+#    #+#             */
/*   Updated: 2022/02/19 14:09:19 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	dst_len;

	counter = 0;
	dst_len = ft_strlen (dst);
	if (size == 0)
		return (ft_strlen (src));
	if (size <= dst_len)
		return (size + ft_strlen (src));
	else
	{
		while (src[counter] && (dst_len + counter + 1) < size)
		{
			dst[dst_len + counter] = src[counter];
			counter++;
		}
		dst[dst_len + counter] = '\0';
		return (dst_len + ft_strlen (src));
	}
}
