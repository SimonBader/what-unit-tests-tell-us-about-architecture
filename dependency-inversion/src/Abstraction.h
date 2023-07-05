#pragma once

#include <memory>
#include "Detail.h"
namespace dependency_inversion {

class Abstraction {
 public:
  Abstraction();
  int Run();
 private:
  std::unique_ptr<Detail> _detail;
};

}
