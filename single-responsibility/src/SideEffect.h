#pragma once

#include "Friend.h"

namespace single_responsibility {

class SideEffect {

 public:
  explicit SideEffect(const std::shared_ptr<Friend> &my_friend);

  void HowDoYouCallAFriendOfFriend(std::string nickname);

 private:
  std::shared_ptr<Friend> _my_friend;
};

}

