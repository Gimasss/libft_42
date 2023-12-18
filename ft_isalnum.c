/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:36:59 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 16:29:17 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/* int     main()
{
    printf("Yes it is %d\n", ft_isalnum('1'));
    printf("Yes it is %d\n", ft_isalnum('g'));
    printf("No it is not %d\n", ft_isalnum('!'));
} */