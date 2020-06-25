/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:18:18 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/25 17:22:59 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (int ac, char*av[])
{
	if(ac == 1)
	{
		while(*av[0] != '\0')

			ft_putchar(*av[0]++);

				ft_putchar('\n');

	}
	return(0);
}

