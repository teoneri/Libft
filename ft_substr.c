/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:50:03 by mneri             #+#    #+#             */
/*   Updated: 2022/10/06 13:50:05 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (start > ft_strlen((char *)s))
	{
		substr = "";
		return (substr);
	}
	if (substr)
	{
		while (len > 0)
		{
			substr[i] = s[start];
			start++;
			i++;
			len--;
		}
		substr[i] = '\0';
	}
	else
		return (NULL);
	return (substr);
}
