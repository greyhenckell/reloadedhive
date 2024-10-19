#
# A simple makefile from source files.
#

LIB_NAME = ft

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

SRC_DIR = src
SRCS = $(wildcard $(SRC_DIR)/*.c)

INCLUDES = -Iincludes

#OBJS = $(SRCS:.c=.o)
# Generate corresponding .o object files for each .c file
OBJS = $(SRCS:$(SRC_DIR)/%.c=obj/%.o)

# define the executable file 
MAIN = mout

all:	$(MAIN)
	@echo  Simple compiler named libft.a has been compiled


$(MAIN): $(OBJS) 
#$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)
	$(AR) $(ARFLAGS) lib$(LIB_NAME).a $(OBJS)

# Rule to compile object files from source files
obj/%.o: $(SRC_DIR)/%.c | obj
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "files Compiled"

# Create the obj/ directory if it does not exist
obj:
	@mkdir -p obj
	@echo "obj dir created"

clean:
	@rm -rf obj lib$(LIB_NAME).a
	@echo "Cleaned up generated files"

# Rebuild the project from scratch
re: fclean all