# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/11/06 13:55:13 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(addsuffix .o, $(addprefix objs/, Colleen))

NAMES = Colleen Grace Sully

all: $(NAMES)

Colleen:
	gcc -o Colleen Colleen.c -Weverything

Grace:
	gcc -o Grace Grace.c -Weverything

Sully:
	gcc -o Sully Sully.c -Weverything

clean:

fclean: clean
	rm -f $(NAMES)

re: fclean all
