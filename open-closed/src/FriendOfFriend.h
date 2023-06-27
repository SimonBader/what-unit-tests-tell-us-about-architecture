#pragma once

#include <string>
namespace open_closed {

class FriendOfFriend {
 public:
  virtual ~FriendOfFriend();
  virtual std::string CallName();
 private:
  const std::string name = "Stranger";
};

}
