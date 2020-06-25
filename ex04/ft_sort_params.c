/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:56:17 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/25 17:36:16 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main( int argc, char **argv)
{
	int arg;
	int start;
	int end;
	char *tmp;

	start = 1;
	end = argc;
	arg = start;

	while(arg < end - 1)
	{
		if(ft_strcmp(argv[arg], argv[arg + 1]) > 0)
				{
					tmp = argv [arg];
					argv[arg] = argv[arg + 1];
					argv[arg +1] = tmp;
					arg = start;
				}
				else
					arg++;
				}

				arg = start;
				while(arg < end)
				{
				ft_putstr(argv[arg]);
				ft_putchar('\n');

				arg++;
				}
				return(0);

}



					
