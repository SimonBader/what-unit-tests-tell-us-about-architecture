#pragma once

#include <string>
#include <vector>

namespace common_mistakes {

class Processor {
 public:
  Processor();
  virtual ~Processor();
  virtual int SumUp(const std::vector<int> &input);
};

}