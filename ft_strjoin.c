/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:28:25 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 18:54:27 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Parameters = s1: The prefix string. s2: The suffix string.
Return value = The new string. NULL if the allocation fails.
Description = Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’. */

#include "libft.h"
#include <stdio.h> // Add missing import for printf

char	*ft_strjoin(const char *s1, const char *s2)
{
	int				i;
	char			*cat;
	char			*sc1;
	char			*sc2;

	i = 0;
	sc1 = (char *)s1; // Cast const char* to char*
	sc2 = (char *)s2; // Cast const char* to char*
	cat = malloc(sizeof(char) * (ft_strlen(sc1) + 1));
	if (!cat)
		return (NULL);
	while (*sc1) // Use pointer dereference instead of sc1[i]
	{
		cat[i] = *sc1; // Assign value to cat[i]
		i++;
		sc1++;
	}
	while (*sc2) // Use pointer dereference instead of sc2[i]
	{
		cat[i] = *sc2; // Assign value to cat[i]
		i++;
		sc2++;
	}
	cat[i] = '\0'; // Add null terminator at the end of the concatenated string
	return (cat);
}
/* 
int main()
{
	char s1[] = "ma che bella ";
	char s2[] = "la cappella";
	char *result = ft_strjoin(s1, s2); // Store the result in a variable
	if (result)
	{
		printf("%s\n", result);
		free(result); // Free the allocated memory
	}
	return 0;
} */
/* 

	int	i;
	unsigned char * cat;
	char * sc1;
	char * sc2;
	
	i = 0;
	sc1 = s1;
	sc2 = s2;
	cat = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!cat)
		return (NULL);
	while (sc1[i] && sc2[i])
	{
		ft_strlcat(sc1, sc2, 50);
	}
	return (cat);
 */