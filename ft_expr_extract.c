/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expr_extract.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 14:26:23 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/17 14:26:32 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_expr_extract.h"
#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
        return ;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int		ft_atoi(char **str)
{
    int		nbr;
    
    nbr = 0;
    while (**str >= '0' && **str <= '9')
    {
        nbr = nbr * 10 + (**str - '0');
        (*str)++;
    }
    return (nbr);
}
