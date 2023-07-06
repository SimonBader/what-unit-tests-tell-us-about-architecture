#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../src/SideEffect.h"

namespace single_responsibility {

using ::testing::Return;

class FriendMock : public Friend {
 public:
  MOCK_METHOD(std::shared_ptr<FriendOfFriend>, GetFriend, (), (override));
};

class FriendOfFriendMock : public FriendOfFriend {
 public:
  MOCK_METHOD(void, SetNickname, (std::string), (override));
};

TEST(SideEffectTest, HowDoYouCallAFriendOfFriend) {
  // arrange
  std::shared_ptr<FriendOfFriendMock> friend_of_friend = std::make_shared<FriendOfFriendMock>();
  std::shared_ptr<FriendMock> my_friend = std::make_shared<FriendMock>();
  EXPECT_CALL(*friend_of_friend, SetNickname("stranger")).Times(1);
  ON_CALL(*my_friend, GetFriend()).WillByDefault(Return(friend_of_friend));
  SideEffect sut(my_friend);

  // act
  sut.HowDoYouCallAFriendOfFriend("stranger");
}

}
