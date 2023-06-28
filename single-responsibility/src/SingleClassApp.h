#pragma once

#include "User.h"
namespace single_responsibility {

class SingleClassApp {
 public:
  SingleClassApp();
  int Run(User user);
};

}
