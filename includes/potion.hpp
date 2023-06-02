#ifndef POTION__H_INCLUDED
#define POTION__H_INCLUDED

#include <map>
#include <iostream>
#include <cstdlib>

#include "tcpserver_unix.hpp"

//typedef int route_handler_func_t(int);
//typedef void route_func_t(std::string, route_handler_func_t*);
//typedef std::map<std::string, route_handler_func_t*> function_map_to;

using route_handler_func_t = int (int);

class PotionApp {
  private:

  public:
    
    void handle_request(int socket, TCPServer* server);
    
    void run();


};

#endif
