CPPFLAGS=-g -std=c++11 -shared -fPIC

OBJS=XApiC.o XApiCpp.o XApiImpl.o

libQuantBox_XAPI.so: ${OBJS}
	g++ ${CPPFLAGS} -o ../lib/$@ $^
clean:
	rm -f *.o
