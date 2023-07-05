#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/BestFriend.h"

namespace open_closed {

using namespace open_closed;
using ::testing::Return;

class FriendMock : public Friend {
 public:
  MOCK_METHOD(std::shared_ptr<FriendOfFriend>, GetFriend, (), (override));
};

class FriendOfFriendMock : public FriendOfFriend {
 public:
  MOCK_METHOD(std::string, CallName, (), (override));
};

TEST(EggLayingWoolMilkPigTest, CallFriendOfFriendToTellTheName) {
  std::shared_ptr<FriendOfFriendMock> friend_of_friend = std::make_shared<FriendOfFriendMock>();
  std::shared_ptr<FriendMock> my_friend = std::make_shared<FriendMock>();
  EXPECT_CALL(*friend_of_friend, CallName()).WillOnce(Return("stranger"));
  EXPECT_CALL(*my_friend, GetFriend()).WillOnce(Return(friend_of_friend));

  BestFriend sut(my_friend);

  EXPECT_EQ("stranger", sut.CallFriendOfFriendToTellTheName());
};

}
