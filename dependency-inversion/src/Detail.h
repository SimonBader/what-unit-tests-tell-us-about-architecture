#pragma once

#include <string>
namespace dependency_inversion {

class Detail {
 public:
  Detail();
  virtual ~Detail();
  virtual int getNumber();
};

}