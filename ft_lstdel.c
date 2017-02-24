/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 20:38:13 by rpassafa          #+#    #+#             */
/*   Updated: 2017/02/23 20:39:01 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lst;
	t_list	*tmp;

	lst = *alst;
	while (lst)
	{
		tmp = lst->next;
		del((lst)->content, (lst)->content_size);
		free(lst);
		lst = tmp;
	}
	*alst = NULL;
}
