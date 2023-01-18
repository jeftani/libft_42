/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeftani <ajeftani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:12:48 by ajeftani          #+#    #+#             */
/*   Updated: 2022/11/04 22:42:22 by ajeftani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	size_t	i;

	string = (char *)s;
	i = 0;
	while (string[i] && string[i] != (char)c)
		i++;
	if (string[i] == (char)c)
		return (&string[i]);
	else
		return (NULL);
}
