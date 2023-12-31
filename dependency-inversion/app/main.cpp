#include <memory>
#include "../src/Abstraction.h"

using namespace dependency_inversion;

int main() {
  auto app = std::make_shared<Abstraction>();
  app->Run();
  return 0;
}