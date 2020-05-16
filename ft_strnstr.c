/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 21:31:27 by lbagg             #+#    #+#             */
/*   Updated: 2020/05/04 08:51:51 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ap;
	size_t	i;
	size_t	j;

	ap = (char*)big;
	if (!*little)
		return (ap);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		if (big[j] == little[i])
		{
			ap = (char*)big + j;
			while (big[j] == little[i] && little[i] && j < len)
			{
				j++;
				i++;
			}
			if (!little[i])
				return (ap);
		}
		j++;
	}
	return (NULL);
}
