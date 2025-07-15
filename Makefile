NAME = libft.a
SRCDIR = srcs
OBJDIR = objs
INCDIR = includes
SRCS =	$(SRCDIR) /ft_isalnum.c \
		$(SRCDIR) /ft_isalpha.c \
		$(SRCDIR) /ft_isascii.c \
		$(SRCDIR) /ft_isdigit.c \
		$(SRCDIR) /ft_isprint.c \
		$(SRCDIR) /ft_strlen.c \

OBJS = $(SRCS:$(SRCDIR)/%.c = $(OBJDIR)/%.o)

CC =	cc
CFLAGS =	-Wall -Wextra -Werror -I$(INCDIR)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
