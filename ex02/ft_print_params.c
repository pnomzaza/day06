/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:31:54 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/25 17:27:42 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main(int ac, char *av[])
{
	int i;
	i = 0;

	if(ac > 1)
		while(++i < ac)
		{
			while(*av[i])
			ft_putchar(*av[i]++);

			ft_putchar('\n');
		}
		return(0);
}


