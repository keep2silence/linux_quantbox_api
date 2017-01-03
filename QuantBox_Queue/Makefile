CPPFLAGS=-g -std=c++11 -Wall -Wextra -shared -fPIC

OBJS=MsgQueue.o RemoteQueue.o main.o 

libQuantBox_Queue.so: ${OBJS}
	g++ -o ../lib/$@ ${CPPFLAGS} ${OBJS}

clean:
	rm -f *.o
