#include "OverDefined.h"

namespace common_mistakes {

OverDefined::OverDefined(const std::shared_ptr<Producer> &producer, const std::shared_ptr<Processor> &processor)
    : _producer(producer), _processor(processor) {

}

OverDefined::~OverDefined() {
}

int OverDefined::SumUp() {
  std::vector<int> input = _producer->Create();
  return _processor->SumUp(input);
}

}