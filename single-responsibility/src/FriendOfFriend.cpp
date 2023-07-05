#include "FriendOfFriend.h"

#include <utility>

namespace single_responsibility {

FriendOfFriend::~FriendOfFriend() = default;

void FriendOfFriend::SetNickname(std::string name) {
  this->nickname = std::move(name);
}

}

