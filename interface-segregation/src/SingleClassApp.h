#pragma once

#include "User.h"
namespace interface_segregation {

class SingleClassApp {
 public:
  SingleClassApp();
  int Run(User user);
};

}
