/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:23:56 by mneri             #+#    #+#             */
/*   Updated: 2022/10/05 11:23:57 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	len;
	char	*small;

	small = (char *)little;
	len = ft_strlen(small);
	i = 1;
	if (*small == '\0')
		return ((char *)big);
	while (len <= n--)
	{
		if (*big == *small)
		{
			while (i)
			{
				if (i == len)
					return ((char *)big);
				if (big[i] != little[i])
					break ;
				i++;
			}
		}
		big++;
	}
	return (NULL);
}
