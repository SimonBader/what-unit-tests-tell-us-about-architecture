#include <memory>
#include "../src/OverDefined.h"

namespace common_mistakes {

int main() {
  auto app = std::make_shared<Abstraction>();
  app->Run();
  return 0;
}

}