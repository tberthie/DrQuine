# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/11/06 17:36:33 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = Colleen Grace Sully

all: $(NAMES)

Colleen:
	gcc -o Colleen Colleen.c -Wall -Wextra -Werror

Grace:
	gcc -o Grace Grace.c -Wall -Wextra -Werror

Sully:
	gcc -o Sully Sully.c -Wall -Wextra -Werror

clean:
	rm -f Grace_kid.c
	rm -f Sully_4.c Sully_3.c Sully_2.c Sully_1.c Sully_0.c
	rm -f Sully_4 Sully_3 Sully_2 Sully_1 Sully_0

fclean: clean
	rm -f $(NAMES)

re: fclean all
