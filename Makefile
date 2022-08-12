
NAME		= push_swap

SRCS		= push_swap.c \
			ft_memset.c \
			ft_atoi.c \
			ir_a.c \
			ir_b.c \
			sort_complex.c \
			sort_simple.c \
			b_to_a.c \
			utils.c

OBJS		= $(SRCS:%.c=%.o)

LIBC		= ar rc

FLAGS		= -Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		gcc -o $(NAME) $(OBJS) 

%.o			:	%.c
		gcc $(FLAGS) -c $^ -I./ -o $@


clean		:
		rm -f $(OBJS)

fclean		:	clean
		rm -f $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re