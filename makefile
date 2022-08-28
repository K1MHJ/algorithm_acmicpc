SRCS=1712.cpp


CC=g++
CFLAGS=-std=c++17 -Wall
TARGET=Prog
OBJS=$(SRCS:.cpp=.o)
INCDIR=-I../inc
LIBDIR=
LIBS=
$(TARGET):$(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

all: clean $(OBJS) $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET) *.d

