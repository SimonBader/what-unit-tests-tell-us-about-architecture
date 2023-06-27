#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/BestFriend.h"

namespace open_closed {

using namespace open_closed;
using ::testing::AtLeast;
using ::testing::Return;

class FriendMock : public Friend {
 public:
  MOCK_METHOD(std::shared_ptr<FriendOfFriend>, GetFriend, ());
};

class FriendOfFriendMock : public FriendOfFriend {
 public:
  MOCK_METHOD(std::string, CallName, ());
};

TEST(EggLayingWoolMilkPigTest, CallTwo) {
  std::shared_ptr<FriendOfFriendMock> friend_of_friend = std::make_shared<FriendOfFriendMock>();
  std::shared_ptr<FriendMock> my_friend = std::make_shared<FriendMock>();
  EXPECT_CALL(*friend_of_friend, CallName()).Times(AtLeast(1)).WillRepeatedly(Return("stranger"));
  EXPECT_CALL(*my_friend, GetFriend()).Times(AtLeast(1)).WillRepeatedly(Return(friend_of_friend));

  BestFriend sut(my_friend);

  EXPECT_EQ("stranger", sut.CallFriend());
};

}