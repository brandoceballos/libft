/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bceballo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 20:07:21 by bceballo          #+#    #+#             */
/*   Updated: 2018/03/11 20:07:30 by bceballo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (csrc < cdst)
		while (len--)
			*(cdst + len) = *(csrc + len);
	else
		while (i < len)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	return (dst);
}
