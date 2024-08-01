/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:56:45 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/26 07:42:12 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	trouve_taille(int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		negatif;	

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negatif = 0;
	if (n < 0)
	{
		n *= -1;
		negatif = 1;
	}
	result = ft_calloc(trouve_taille(n) + negatif + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (n)
	{
		result[trouve_taille(n) + negatif - 1] = (n % 10) + 48;
		n /= 10;
	}
	if (negatif)
		result[0] = '-';
	return (result);
}

int	trouve_taille(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
