#include "Abstraction.h"

namespace dependency_inversion {

Abstraction::Abstraction() : _detail(std::unique_ptr<Detail>()) {
}

int Abstraction::Run() {
  return _detail->getNumber();
}

}