/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:47:51 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 19:14:01 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
It is used to fill a block of memory with a specific value. 
The function takes three arguments:
	void *s: This is a pointer to the block of memory that needs to be filled.
	int c: This is the value to be set. The value is passed as an int, but the 
		function fills the block of memory using the unsigned char conversion 
		of this value. (SO i have to make a cast)

  	more about this: Using unsigned char in the ft_memset function is necessary because ft_memset is typically used to set a block of memory to a specific byte value. 
   	Here are the key reasons:
	Range of Values: An unsigned char can hold values from 0 to 255, whereas a signed char can hold values from -128 to 127. ft_memset is often used to set bytes to any value in the 0-255 range, making unsigned char the appropriate type to handle the full range of possible byte values.
	Consistency with Standard Library: The standard library function memset in C also uses unsigned char for the value to set, ensuring consistency with standard practices.
	Avoid Negative Values: Using unsigned char prevents negative values from being interpreted incorrectly when setting memory.
	
 size_t n: This is the number of bytes to be set to the value.
The function returns a pointer to the memory area `s`.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i++] = (unsigned char)c;
	}
	return (s);
}
/* 
 int main()
 {
	int c = 70;
	char s[] = "bugger";
	ft_memset(s, c, 7);
	printf("%s\n", s);
 } */
