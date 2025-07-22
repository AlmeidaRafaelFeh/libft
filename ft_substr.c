/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafreire <rafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:00:02 by rafreire          #+#    #+#             */
/*   Updated: 2025/07/22 19:13:45 by rafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t s_len, unsigned int start, size_t len);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{	
	size_t	i;
	size_t	s_len;
	size_t	real_len;
	char	*newstr;	

	i = 0;
	s_len = ft_strlen(s);
	real_len = ft_min(s_len, start, len);
	if (start > s_len)
	{
		newstr = (char *)ft_calloc(1, 1);
		return (newstr);
	}
	newstr = (char *)ft_calloc(real_len + 1, sizeof(char));
	if (!newstr)
		return (0);
	while (s[i] && i < real_len)
	{
		newstr[i] = s[start + i];
		i++;
	}
	return (newstr);
}

size_t	ft_min(size_t s_len, unsigned int start, size_t len)
{
	if (s_len < start)
		return (0);
	if (s_len - start < len)
		return (s_len - start);
	return (len);
}
