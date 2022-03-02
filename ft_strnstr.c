/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:30:51 by ahatay            #+#    #+#             */
/*   Updated: 2022/02/19 14:10:05 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	length;

	length = ft_strlen(needle);
	if (!length)
		return ((char *)haystack);
	while (*haystack && length <= len--)
	{
		if (ft_strncmp(haystack, needle, length) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
