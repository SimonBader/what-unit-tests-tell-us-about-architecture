
#include "EggLayingWoolMilkPig.h"
#include "One.h"
#include "Two.h"

single_responsibility::EggLayingWoolMilkPig::EggLayingWoolMilkPig(
        const std::shared_ptr<single_responsibility::One> &one,
        const std::shared_ptr<single_responsibility::Two> &two) : _one(one), _two(two) {

}

bool single_responsibility::EggLayingWoolMilkPig::IsOneEven() {
  return false;
}

bool single_responsibility::EggLayingWoolMilkPig::IsTwoEven() {
  return false;
}
