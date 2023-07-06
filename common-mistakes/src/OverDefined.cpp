#include "OverDefined.h"

namespace common_mistakes {

common_mistakes::Abstraction::Abstraction() : _detail(std::unique_ptr<Detail>()) {
}

int Abstraction::Filter() {
  return _detail->getNumber();
}

}