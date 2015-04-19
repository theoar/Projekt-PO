OBJS = main.cpp Button.cpp SDL_Main.cpp DragAndDropButton.cpp Pulpit.cpp Element.cpp

CC = clang++
#CC = g++

COMPILER_FLAGS = -w -std=c++11

LINKER_FLAGS = -lSDL2 -I/usr/local/include -L/usr/local/lib

OBJ_NAME = main

all : $(OBJS)
		$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)