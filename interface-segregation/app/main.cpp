#include <memory>
#include "../src/SingleClassApp.h"

namespace interface_segregation {

int main() {
  auto app = std::make_shared<SingleClassApp>();
  app->Run(User());
  return 0;
}

}