#pragma once

#include <string>
#include <vector>

namespace common_mistakes {

class Producer {
 public:
  Producer();
  virtual ~Producer();
  virtual std::vector<int> Create();
};

}
