#pragma once

#include <memory>
#include "Producer.h"
#include "Processor.h"

namespace common_mistakes {

class OverDefined {
 public:
  OverDefined(const std::shared_ptr<Producer> &producer,
              const std::shared_ptr<Processor> &processor);
  virtual ~OverDefined();

  int SumUp();

 private:
  std::shared_ptr<Producer> _producer;
  std::shared_ptr<Processor> _processor;
};

}
