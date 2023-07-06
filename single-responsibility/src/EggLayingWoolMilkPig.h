#pragma once

#include <memory>
#include "One.h"
#include "Two.h"
#include "Three.h"
#include "Four.h"

namespace single_responsibility {

class EggLayingWoolMilkPig {
 public:
  explicit EggLayingWoolMilkPig(const std::shared_ptr<One> &one,
                                const std::shared_ptr<Two> &two,
                                const std::shared_ptr<Three> &three,
                                const std::shared_ptr<Four> &four);
  bool CallOne();
  bool CallTwo();
  bool CallThree();
  bool CallFour();
  std::string DoEverything();
 private:
  std::shared_ptr<One> _one;
  std::shared_ptr<Two> _two;
  std::shared_ptr<Three> _three;
  std::shared_ptr<Four> _four;
};

}

