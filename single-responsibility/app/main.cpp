#include <cstdio>
#include "../src/EggLayingWoolMilkPig.h"

using namespace single_responsibility;

int main() {
  auto app = std::make_shared<EggLayingWoolMilkPig>(std::make_shared<One>(),
                                                    std::make_shared<Two>(),
                                                    std::make_shared<Three>(),
                                                    std::make_shared<Four>());
  printf("One is first: %d\n", app->CallOne());
  printf("Two is even: %d\n", app->CallTwo());
  printf("Three is Fibonacci: %d\n", app->CallThree());
  printf("Four is square: %d\n", app->CallFour());
  return 0;
}