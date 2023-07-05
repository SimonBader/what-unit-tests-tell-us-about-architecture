#include "BestFriend.h"

namespace open_closed {

BestFriend::BestFriend(const std::shared_ptr<Friend> &my_friend)
    : _my_friend(my_friend) {}

std::string BestFriend::CallFriendOfFriendToTellTheName() {
  return _my_friend->GetFriend()->CallName();
}

}
