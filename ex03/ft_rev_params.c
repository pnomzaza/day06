/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:34:37 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/25 17:31:25 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c)
{
	write(1,&c,1);
}

int main (int ac, char *av[])
{
	while( --ac >= 1)
	{
		while(*av[ac])
		
			ft_putchar(*av[ac]++);

			ft_putchar('\n');
		}
		return(0);

}

