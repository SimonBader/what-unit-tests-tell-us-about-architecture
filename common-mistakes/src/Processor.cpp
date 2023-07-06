#include <numeric>
#include "Processor.h"

namespace common_mistakes {

Processor::Processor() = default;

Processor::~Processor() = default;

int Processor::SumUp(const std::vector<int> &input) {
  return std::reduce(input.begin(), input.end());
}

}
