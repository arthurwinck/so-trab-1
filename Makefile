OBJS= main.cc cpu.cc cpu.h main_class.h main_class.cc traits.h
OBJ_NAME = main
CC= g++



LINKER_FLAGS= -lrt -lpthread

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

