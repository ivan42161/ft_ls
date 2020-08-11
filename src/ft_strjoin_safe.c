/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdain <sdain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 03:41:00 by sdain             #+#    #+#             */
/*   Updated: 2020/08/11 03:43:57 by sdain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_strjoin_safe(char **str1, const char *str2)
{
	char *result;

	result = ft_strjoin(*str1, str2);
	ft_strdel(str1);
	return (result);
}
