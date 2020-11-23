/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:51:41 by walethea          #+#    #+#             */
/*   Updated: 2020/11/23 18:52:16 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     i;
    t_list  *tmp;

    i = 0;
    tmp = lst;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}
