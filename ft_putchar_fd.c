/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmastroc <gmastroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:47:23 by gmastroc          #+#    #+#             */
/*   Updated: 2023/12/18 19:14:19 by gmastroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NOTES
/* Parameters - c: The character to output.
fd: The file descriptor on which to write.
External functs. - write
Description - Outputs the character ’c’ to the given file
descriptor. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
