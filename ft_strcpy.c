/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:38:26 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/21 10:38:30 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_lib.h"
#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
    char *s;
    s = dest;
    while ((*s++ = *src++) != 0);
    return (dest);
}
 // int main()
 // {
 // 	char dest[2];
 // 	char *src = "hello";
 // 	ft_strcpy(dest,src);
 // 	printf("%s\n",dest);
 // 	return 0;
 // }