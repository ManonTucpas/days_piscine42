/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:35:38 by mlecuyer          #+#    #+#             */
/*   Updated: 2020/09/29 12:00:40 by mlecuyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(char) * (ft_size(str) + 1);
	if (dup == NULL)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dup);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;

	s_stock_str	*tab;	
	tab = malloc(sizeof(s_stock_str) * (ac + 1));
	if (tab == NULL)
		return (0);
	i = 1;
	while (ac > i)
	{
		tab[i].size = ft_size(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(a
		i++;
	}
	tab[i].str = '\0';
}
