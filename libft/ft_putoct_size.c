/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoct_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 19:17:16 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/30 16:41:44 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_putoct_size(unsigned long long int nb)
{
	int		i;

	i = 1;
	while (nb /= 8)
		i++;
	return (i);
}