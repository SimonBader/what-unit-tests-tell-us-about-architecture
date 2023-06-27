#include "Friend.h"

namespace open_closed {

Friend::Friend() = default;

Friend::Friend(const std::shared_ptr<FriendOfFriend> &my_friend)
    : _my_friend(my_friend) {}

Friend::~Friend() = default;

std::shared_ptr<FriendOfFriend> Friend::GetFriend() {
  return _my_friend;
}

}

