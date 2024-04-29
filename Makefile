NAME = libftprintf.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c \
		write_functions.c \
		support_funct.c \
		special_x.c \

OBJS = $(SRCS:.c=.o)

ARRC = ar rc

RM = rm -f

.c.o : $(SRCS)
	${CC} ${CCFLAGS} -c -o $@ $^

$(NAME) : $(OBJS)
	$(ARRC) $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
