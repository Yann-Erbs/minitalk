/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:46 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/26 14:07:32 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;

	if (!dst && !size)
		return (0);
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst >= size)
		return (len_src + size);
	if (len_src < size - len_dst)
		ft_strlcpy(dst + len_dst, src, len_src + 1);
	else
		ft_strlcpy(dst + len_dst, src, size - len_dst);
	return (len_src + len_dst);
}