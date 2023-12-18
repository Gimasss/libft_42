/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:06:00 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 18:54:44 by gmastroc         ###   ########.fr       */
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

	i = start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return ((char *)sub);
}

/* int main()
{
	char s[] = "polletto arrosto";
	printf("%s\n", ft_substr(s, 0, 8));
	free ;
} */