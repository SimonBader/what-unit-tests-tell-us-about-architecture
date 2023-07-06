#include <sstream>
#include "EggLayingWoolMilkPig.h"

namespace single_responsibility {

EggLayingWoolMilkPig::EggLayingWoolMilkPig(
    const std::shared_ptr<One> &one,
    const std::shared_ptr<Two> &two,
    const std::shared_ptr<Three> &three,
    const std::shared_ptr<Four> &four) : _one(one), _two(two), _three(three), _four(four) {
}

bool EggLayingWoolMilkPig::CallOne() {
  return _one->IsFirst();
}

bool EggLayingWoolMilkPig::CallTwo() {
  return _two->IsEven();
}

bool EggLayingWoolMilkPig::CallThree() {
  return _three->IsFibonacci();
}

std::string EggLayingWoolMilkPig::DoEverything() {
  if (!_one->IsFirst())
    return "wrong";
  if (!_two->IsEven())
    return "wrong";
  if (!_three->IsFibonacci())
    return "wrong";
  if (!_four->ContainsEnoughEdgesForSquare())
    return "wrong";
  return "right";
}

}