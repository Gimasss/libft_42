/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:16:24 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 19:15:49 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The memchr() function scans the initial n bytes of
	   the memory area pointed to by s for the first  in‐
	   stance  of  c.  Both c and the bytes of the memory
	   area pointed to by s are interpreted  as  unsigned
	   char.
*/


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/* int main()
{
	char s[] = "poppante";
	int c = 'a';
	char *test;
	test = ft_memchr(s, c, 9);
	printf("%p\n", test);
} */