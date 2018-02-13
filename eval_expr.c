/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 14:27:25 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/17 23:00:48 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_expr_extract.h"
#include "eval_expr.h"

int		ft_parse_number(char **expr)
{
    int nbr;
    
    while (**expr == ' ')
        (*expr)++;
    if (**expr == '(')
    {
        (*expr)++;
        nbr = ft_parse_sum(expr);
        if (**expr == ')')
            (*expr)++;
        return (nbr);
    }
    return (ft_atoi(expr));
}

int		ft_parse_factors(char **expr)
{
    int		nbr;
    int		nbr2;
    char	op;
    
    nbr = ft_parse_number(expr);
    while (**expr)
    {
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '/' && op != '*' && op != '%')
            return (nbr);
        (*expr)++;
        nbr2 = ft_parse_number(expr);
        if (op == '/')
            nbr /= nbr2;
        else if (op == '*')
            nbr *= nbr2;
        else
            nbr %= nbr2;
    }
    return (nbr);
}

int		ft_parse_sum(char **expr)
{
    int		nbr;
    int		nbr2;
    char	op;
    
    nbr = ft_parse_factors(expr);
    while (**expr)
    {
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '+' && op != '-')
            return (nbr);
        (*expr)++;
        nbr2 = ft_parse_factors(expr);
        if (op == '+')
            nbr += nbr2;
        else
            nbr -= nbr2;
    }
    return (nbr);
}

int		eval_expr(char *expr)
{
    return (ft_parse_sum(&expr));
}
