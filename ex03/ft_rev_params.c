/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:34:37 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/25 16:39:42 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

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
