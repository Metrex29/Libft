/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:10:58 by raulp             #+#    #+#             */
/*   Updated: 2025/10/23 17:54:59 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// minecart ---next---minecart
t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	
	node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	
	node -> content = content;
	node -> next =  NULL;

	return (node);
}