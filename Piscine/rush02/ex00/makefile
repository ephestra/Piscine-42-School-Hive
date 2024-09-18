# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpolat <tpolat@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 19:59:45 by tpolat            #+#    #+#              #
#    Updated: 2024/03/03 20:00:07 by tpolat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Wextra
TARGET = rush-02
SRCDIR = src
OBJS = $(SRCS:.c=.o)
all: $(TARGET)
%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -I $(INCDIR)
$(TARGET): $(OBJS)
	gcc $(CFLAGS) -o $@ $^
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
