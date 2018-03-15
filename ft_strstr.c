/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bceballo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 20:15:50 by bceballo          #+#    #+#             */
/*   Updated: 2018/03/14 16:37:28 by bceballo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (str[i] == to_find[i] && str[i] == '\0')
		return ((char *)&str[i]);
	while (str[i])
	{
		j = i;
		while (str[j] == to_find[j - i] && str[j])
			j++;
		if (to_find[j - i] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
