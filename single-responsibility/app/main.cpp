#include <cstdio>
#include "../src/EggLayingWoolMilkPig.h"

namespace single_responsibility {

int main() {
  auto app = std::make_shared<EggLayingWoolMilkPig>(std::make_shared<One>(),
                                                    std::make_shared<Two>(),
                                                    std::make_shared<Three>(),
                                                    std::make_shared<Four>());
  printf("%s", &"One is first: "[app->CallOne()]);
  printf("%s", &"Two is even: "[app->CallTwo()]);
  printf("%s", &"Three is Fibonacci: "[app->CallThree()]);
  printf("%s", &"Four is square: "[app->CallFour()]);
  return 0;
}

}