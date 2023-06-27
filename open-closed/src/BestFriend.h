#pragma once

#include <memory>
#include "Friend.h"

namespace open_closed {

class BestFriend {

 public:
  explicit BestFriend(const std::shared_ptr<Friend> &my_friend);

  std::string CallFriend();

 private:
  std::shared_ptr<Friend> _my_friend;
};

}

