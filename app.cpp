#include "includes/potion.hpp"

#include "fl.hpp"

route_struct_t handle_get_home(PotionApp* app, int num) {
  
  return render(app, "index.html");

}

route_struct_t handle_get_string(PotionApp* app, int num) {
  return send_string(app, "<h1>Hello, World!<h1>");
}


int main () {
  
  PotionApp app(8080);
  
  app.set_get("/", &handle_get_home);
  app.set_get("/string", &handle_get_string);
  

  make_routes(&app);

  app.run();
  

  return 0;
}
