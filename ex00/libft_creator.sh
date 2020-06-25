# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 11:10:51 by pnomzaza          #+#    #+#              #
#    Updated: 2020/06/25 13:59:18 by pnomzaza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

(gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c) && (ar rc libft.a *o) 
