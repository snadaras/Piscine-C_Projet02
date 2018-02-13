/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 14:38:10 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/17 23:04:40 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *expr);
int		ft_parse_sum(char **expr);
int		ft_parse_factors(char **expr);
int		ft_parse_number(char **expr);
#endif

