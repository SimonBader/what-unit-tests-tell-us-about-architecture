#include "SideEffect.h"

namespace single_responsibility {

SideEffect::SideEffect(const std::shared_ptr<Friend> &my_friend)
    : _my_friend(my_friend) {}

void SideEffect::HowDoYouCallAFriendOfFriend(std::string nickname) {
  _my_friend->GetFriend()->SetNickname(nickname);
}

}
