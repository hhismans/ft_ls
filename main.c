/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 07:41:40 by hhismans          #+#    #+#             */
/*   Updated: 2014/11/18 01:10:25 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <dirent.h>
#include <sys/types.h>

int		main(void)
{
	DIR* rep;
	struct dirent* fichierLu;
	
	rep = NULL;
	rep = opendir(".");
	if(rep == NULL)
		return (1);
while ((fichierLu = readdir(rep)))
	ft_putendl(fichierLu->d_name);
	if (closedir(rep) == -1)
		return (-1);
	return (0);
}

char	**rdNameDir(char *str)
{
	struct dirent* fileRead;
	struct direct* tmp;

	fileRead = readdir(rep);
	while	(tmp = readdir(rep))
	{
		fileRead->next = tmp;
		fileRead = tmp;
	}
	return (file)
}
