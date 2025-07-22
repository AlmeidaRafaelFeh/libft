/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafreire <rafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:22:45 by rafreire          #+#    #+#             */
/*   Updated: 2025/07/21 18:55:57 by rafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			last = ((char *)&str[i]);
	i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&str[i]);
	return (last);
}
