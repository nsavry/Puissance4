# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/14 05:48:46 by nsavry            #+#    #+#              #
#    Updated: 2014/03/09 20:14:19 by nsavry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = puissance4

FTC = ft_main.c\
	  ft_init.c\
	  ft_check.c\
	  ft_solve.c\
	  ft_display.c\
	  ft_error.c\
	  ft_ia_one.c\
	  ft_ia_two.c\
	  ft_free.c\
	  ft_win.c\
	  ft_put_near.c\
	  ft_check_j.c\
	  ft_p2.c\
	  ft_near.c

FTO = $(subst .c,.o,$(FTC))

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(FTO)
	@Make -C ./libft
	@printf '\033[1;33;40m'
	@echo "[libft]\c"
	@printf '\033[0m'
	@printf '\033[1;32;40m'
	@echo "[ok]"
	@printf '\033[0m'
	@gcc -o $(NAME) -L./libft -lft $(FTO)
	@printf '\033[1;33;40m'
	@echo "[$(NAME)]\c"
	@printf '\033[0m'
	@printf '\033[1;32;40m'
	@echo "[ok]"
	@printf '\033[0m'

%.o: %.c
	@clear
	@printf '\033[1;31;40m'
	@echo "## - Makefile - ##"
	@printf '\033[0m'
	@printf '\033[1;37;40m'
	@echo "Creating library libft and compile $(NAME)"
	@printf '\033[0m'
	@gcc -Wall -Werror -Wextra -I./ -I./libft/includes -c $<
	@printf '\033[1;33;40m'
	@echo "[c file]\c"
	@printf '\033[0m'
	@printf '\033[1;32;40m'
	@echo "[ok]"
	@printf '\033[0m'

clean:
	@make -C ./libft clean
	@rm -rf $(FTO)

fclean: clean
	@make -C ./libft fclean
	@rm -rf $(NAME)

re: fclean all
