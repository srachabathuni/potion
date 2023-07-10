lib:
	g++ $(CCFLAGS) $(CFLAGS) -c -fPIC -std=c++20 src/utils.cpp src/threading.cpp src/tcpserver_unix.cpp src/request.cpp src/response.cpp src/potion.cpp
	g++  $(LDFLAGS) utils.o threading.o tcpserver_unix.o response.o request.o potion.o -shared -o libpotion_arm64.so

clean:
	rm *.o
	rm bin/*.so

all: lib

