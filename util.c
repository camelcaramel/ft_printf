/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwik <donghwik@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:30:22 by donghwik          #+#    #+#             */
/*   Updated: 2021/03/28 10:48:48 by donghwik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     is_option(const char c)
{
    return (c == 'd' || c == 's' || c == 'c' || c == 'l' || c == 'p' || c == 'x');
}

int     is_digit(const char c)
{
    return (c >= '0' && c <= '9');
}

int     is_flag(const char c)
{
    return (c == '0' || c == '-' || c == '.' || c == '*');
}

int     ft_strlen(const char *s)
{
    const char *temp;

    temp = s;
    while (*s)
        s++;
    return (s- temp);
}

int     ft_numlen(long long n, int radix)
{
    long long ret;

    ret = 0;
    if (n < 0)
        n *= -1;
    else if (n == 0)
        return (1);
    while (n > 0)
    {
        ret++;
        n /= radix;
    }
    return (ret);
}