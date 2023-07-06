#include <memory>
#include "../src/OverDefined.h"

using namespace common_mistakes;

int main() {
  auto app = std::make_shared<OverDefined>(std::make_shared<Producer>(), std::make_shared<Processor>());
  printf("The sum of all parts is: %d\n", app->SumUp());
  return 0;
}