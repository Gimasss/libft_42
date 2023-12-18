/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:56:13 by gmastroc          #+#    #+#             */
/*   Updated: 2023/11/29 18:56:11 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 65 && c <= 90) 
    return (c + 32);

    else 
        return (c);  
}

/* int     main()
{
    printf("if %c\n", ft_tolower('A'));
    printf("else %c\n", ft_tolower('b'));
}
 */