/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:51:23 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/23 12:43:00 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (dest > src)
		while (n--)
			*((char *) dest + n) = *((char *) src + n);
	else
		ft_memcpy(dest, src, n);
	return ((char *) dest);
}
