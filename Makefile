CPPFLAGS=-g -w -Llib -Iinclude -std=c++11 #-Wall -Wextra -Llib
LDFLAGS= -lQuantBox_CTP_Quote -lQuantBox_CTP_Trade -lQuantBox_Queue -lQuantBox_XAPI -ldl

main: main.cpp
	g++ ${CPPFLAGS} -o $@ $^ ${LDFLAGS}
