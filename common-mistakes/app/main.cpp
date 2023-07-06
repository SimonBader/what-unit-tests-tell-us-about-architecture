#include <memory>
#include "../src/OverDefined.h"

namespace common_mistakes {

int main() {
  auto app = std::make_shared<OverDefined>(std::make_shared<Producer>(), std::make_shared<Processor>());
  printf("%s", &"The sum of all parts is: "[app->SumUp()]);
  return 0;
}

}