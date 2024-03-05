#include "guest-oslogin/oslogin_utils.h"

#include "gtest/gtest.h"

using namespace ::oslogin_utils;

class JsonParsingTest : public ::testing::Test {}

TEST_F(JsonParsingTest, ParseJsonToUsersTest) {
  std::vector<string> result;
  bool ret = ParseJsonToUsers(
      "{\"usernames\": [\"user1\", \"user2\"]}", &result);
  ASSERT_TRUE(ret);
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0], "user1");
  EXPECT_EQ(result[1], "user2");
}
