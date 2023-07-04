#ifndef TCPSERVER_UNIX_H_INCLUDED
#define TCPSERVER_UNIX_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <vector>
#include <cstddef>


typedef struct receive_struct_t {
  std::vector<std::byte>* buffer;
  size_t bytes_read;

} receive_struct_t;


class TCPServer {
  private:
    int portno;
    int sockfd;
    sockaddr_in serv_addr;
    sockaddr_in cli_addr;

  public:
    TCPServer(int port);
    int accept_connection();
    receive_struct_t receive(int timeout_val, int socket, size_t read_size); //timeout val in seconds
    void close_connection(int socket);
    void send(char* buffer, size_t size, int socket);
    void send_str(const std::string& msg, int socket);
    

  private:
    void error(const char *msg);
};

#endif