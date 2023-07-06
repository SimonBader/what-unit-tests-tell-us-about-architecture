#include "Producer.h"

namespace common_mistakes {

Producer::Producer() = default;

Producer::~Producer() = default;

std::vector<int> Producer::Create() {
  return std::vector<int>{10, 20, 30};
}

}