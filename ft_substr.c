/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:06:00 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/19 14:01:12 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
return The substring.
NULL if the allocation fails.
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
 */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*sub;

	if (!s)
		return (NULL);
	i = start;
	sub = ft_calloc((len + 1), sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	return ((char *)sub);
}

/* int main()
{
	char s[] = "polletto arrosto";
	printf("%s\n", ft_substr(s, 0, 8));
	free ;
} */