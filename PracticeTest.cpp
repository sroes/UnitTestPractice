/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_most_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is__uppercase_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ACCA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_lowercase_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("acca");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_upper_lower_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("acCA");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("stanleyyelnats");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("stanleyyyelnats");
    ASSERT_TRUE(actual);
}
