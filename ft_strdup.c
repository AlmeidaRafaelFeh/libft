/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafreire <rafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:22:39 by rafreire          #+#    #+#             */
/*   Updated: 2025/07/21 11:30:39 by rafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*newstr;

	i = 0;
	newstr = calloc(ft_strlen(s) + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	return (newstr);
}
