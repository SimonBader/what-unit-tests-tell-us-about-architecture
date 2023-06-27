#include <cstdio>
#include "../src/BestFriend.h"

namespace open_closed {

int main() {
  auto friend_of_friend = std::make_shared<FriendOfFriend>();
  auto my_friend = std::make_shared<Friend>(friend_of_friend);
  auto app = std::make_shared<BestFriend>(my_friend);
  std::printf("A friend of my friend says that he is a %s", app->CallFriend().c_str());
  return 0;
}

}