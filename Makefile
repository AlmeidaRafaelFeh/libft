NAME = libft.a
SRCDIR = srcs
OBJDIR = objs
INCDIR = includes
SRCS = $(SRCDIR) /*.c \

OBJS = $(SRCS:$(SRCDIR)/%.c = $(OBJDIR)/%.o)

CC =	cc
CFLAGS =	-Wall -Wextra -Werror -I$(INCDIR)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJDIR)