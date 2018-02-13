/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 14:33:08 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/17 22:56:50 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_expr_extract.h"
#include "eval_expr.h"

int		main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_putnbr(eval_expr(argv[1]));
        ft_putchar('\n');
    }
    return (0);
}
