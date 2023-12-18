/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:34:49 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/14 19:05:32 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sp1;
	unsigned char	*sp2;

	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (sp1[i] && sp2[i] && sp1[i] == sp2[i] && i < n - 1)
		i++;
	return (sp1[i] - sp2[i]);
}
/* 
int main()
{
	char *s1 = "";
	char *s2 = "";
	printf("%d\n", ft_memcmp("", "bia", 99));
	//printf("%d\n", strncmp(s1, "bia", 99));
	printf("%d\n", ft_memcmp("madre", "mADRE", 1));
	//printf("%d\n", strncmp("madre", "MADRE", 5));
} 
*/