/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafreire <rafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:27:52 by rafreire          #+#    #+#             */
/*   Updated: 2025/07/24 21:06:25 by rafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int len;
	char *newstr;
	
	i = 0;
	len = 0;
	newstr = NULL;
	if (!s)
		return (0);
	while (s[i])
	{
		(!ft_flag(s[i], c) && ft_flag(s[i -1], c)) 
		||
		(!ft_flag(s[i], c) && (ft_flag(s[i +1], c) || ft_flag(s[i +1], '\0')))
		if (ft_flag(s[i], c))
			i++;
		else
			len++;
			i++;	
	}
	newstr = ft_calloc(len + 1, sizeof(char));
	if(!newstr)
		return (0);
	while (s[i])
		if (ft_flag (s[i], c))
			i++;
		else
		newstr = 
}

int	ft_flag(char s, char c)
{
	return (s == c);
}