#pragma once

#include <memory>
#include "One.h"
#include "Two.h"

namespace single_responsibility {

class EggLayingWoolMilkPig {

 public:
  explicit EggLayingWoolMilkPig(const std::shared_ptr<single_responsibility::One> &one,
                                const std::shared_ptr<single_responsibility::Two> &two);

  bool IsOneEven();

  bool IsTwoEven();

 private:
  std::shared_ptr<single_responsibility::One> _one;
  std::shared_ptr<single_responsibility::Two> _two;
};

}

