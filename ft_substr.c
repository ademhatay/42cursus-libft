/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:30:00 by ahatay            #+#    #+#             */
/*   Updated: 2022/02/22 12:39:00 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	count;
	char	*substr;

	if (s)
	{		
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		substr = (char *) malloc((sizeof(char) * i) + 1);
		if (!(substr))
			return (NULL);
		count = 0;
		while (count < i)
		{
			substr[count] = s[start + count];
			count++;
		}
		substr[count] = '\0';
		return (substr);
	}
	return (NULL);
}
