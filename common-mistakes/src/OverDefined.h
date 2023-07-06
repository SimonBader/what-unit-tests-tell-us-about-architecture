#pragma once

#include <memory>
#include "Detail.h"
namespace common_mistakes {

class Abstraction {
 public:
  Abstraction();
  int Run();
 private:
  std::unique_ptr<Detail> _detail;
};

}
