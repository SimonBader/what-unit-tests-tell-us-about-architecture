#include <sstream>
#include "EggLayingWoolMilkPig.h"
#include "One.h"
#include "Two.h"

namespace single_responsibility {

EggLayingWoolMilkPig::EggLayingWoolMilkPig(
    const std::shared_ptr<One> &one,
    const std::shared_ptr<Two> &two,
    const std::shared_ptr<Three> &three) : _one(one), _two(two), _three(three) {
}

bool EggLayingWoolMilkPig::IsOneFirst() {
  return _one->IsFirst();
}

bool EggLayingWoolMilkPig::IsTwoEven() {
  return _two->IsEven();
}

bool EggLayingWoolMilkPig::IsThreeFibonacci() {
  return _three->IsFibonacci();
}

std::string EggLayingWoolMilkPig::DoAllTogether() {
  if (!_one->IsFirst())
    return "wrong";
  if (!_two->IsEven())
    return "wrong";
  if (!_three->IsFibonacci())
    return "wrong";
  return "right";
}

}