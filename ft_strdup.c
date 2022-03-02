/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:46:01 by ahatay            #+#    #+#             */
/*   Updated: 2022/02/22 13:19:09 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	int		counter;

	counter = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (s1[counter] != '\0')
	{
		str[counter] = s1[counter];
		counter++;
	}	
	str[counter] = '\0';
	return (str);
}
