CPPFLAGS=-g -std=c++11 -shared -fPIC
OBJS=TraderApi.o TypeConvert.o main.o

libQuantBox_CTP_Trade.so: ${OBJS}
	g++ ${CPPFLAGS} -o ../lib/$@ ${OBJS}

clean:
	rm -f *.o
