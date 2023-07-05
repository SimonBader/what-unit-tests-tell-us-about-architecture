#pragma once

#include <string>
namespace single_responsibility {

class FriendOfFriend {
 public:
  virtual ~FriendOfFriend();
  virtual void SetNickname(std::string name);
 private:
  std::string nickname;
};

}
