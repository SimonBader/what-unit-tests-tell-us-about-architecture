#pragma once

#include <memory>
#include "One.h"
#include "Two.h"
#include "Three.h"

namespace single_responsibility {

class EggLayingWoolMilkPig {
 public:
  explicit EggLayingWoolMilkPig(const std::shared_ptr<One> &one,
                                const std::shared_ptr<Two> &two,
                                const std::shared_ptr<Three> &three);
  bool IsOneFirst();
  bool IsTwoEven();
  bool IsThreeFibonacci();
  std::string DoAllTogether();
 private:
  std::shared_ptr<One> _one;
  std::shared_ptr<Two> _two;
  std::shared_ptr<Three> _three;
};

}

