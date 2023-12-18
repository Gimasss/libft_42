/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:07:14 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 19:17:22 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	The calloc() function allocates memory for  an  array
	   of  nmemb  elements  of size bytes each and returns a
	   pointer to the allocated memory.  The memory  is  set
	   to  zero.   If  nmemb or size is 0, then calloc() re‐
	   turns either NULL, or a unique pointer value that can
	   later  be successfully passed to free().  If the mul‐
	   tiplication of nmemb and size would result in integer
	   overflow,  then  calloc()  returns an error.  By con‐
	   trast, an integer overflow would not be  detected  in
	   the  following call to malloc(), with the result that
	   an incorrectly sized block of memory would  be  allo‐
	   cated:
malloc(nmemb * size); 
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	ft_bzero(res, (nmemb * size));
	return (res);
}
/* while (i < (nmemb * size))
	{
		call[i] = '\0';
		i++;
	} */
/* 
int main()
{
	char *s = ft_calloc(2, sizeof(char));
	s[0] = 'a';
	printf("%s\n", s);
	free(s);
} */