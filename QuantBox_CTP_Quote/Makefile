CPPFLAGS=-g -std=c++11 -shared -fPIC

OBJS=MdUserApi.o main.o

libQuantBox_CTP_Quote.so: ${OBJS}
	g++ ${CPPFLAGS} -o ../lib/$@ ${OBJS}

clean:
	rm -f *.o
