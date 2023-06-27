#pragma once
#include <string>
#include <memory>
#include "FriendOfFriend.h"

namespace open_closed {

class Friend {
 public:
  Friend();
  explicit Friend(const std::shared_ptr<FriendOfFriend> &my_friend);
  virtual ~Friend();
  virtual std::shared_ptr<FriendOfFriend> GetFriend();
 private:
  std::shared_ptr<FriendOfFriend> _my_friend;
};

}

