#include <numeric>
#include "Processor.h"

namespace common_mistakes {

Processor::Processor() = default;

Processor::~Processor() = default;

int Processor::SumUp(const std::vector<int> &input) {
  std::vector<int> output(input.size());
  return std::reduce(output.begin(), output.end());
}

}
