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
TEST(PracticeTest, descending_sort)
{
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	int real_first = 3;
	int real_second = 2;
	int real_third = 1;

	obj.sortDescending(first, second, third);
	ASSERT_EQ(real_first, first);
	ASSERT_EQ(real_second, second);
    ASSERT_EQ(real_third, third);
}
TEST(PracticeTest, ascending_sort)
{
	Practice obj;
	int first = 2;
	int second = 4;
	int third = 6;
	int real_first = 6;
	int real_second = 4;
	int real_third = 2;

	obj.sortDescending(first, second, third);
	ASSERT_EQ(real_first, first);
	ASSERT_EQ(real_second, second);
    ASSERT_EQ(real_third, third);
}
TEST(PracticeTest, descending_swapped)
{
	Practice obj;
	int first = 2;
	int second = 3;
	int third = 1;
	int real_first = 3;
	int real_second = 2;
	int real_third = 1;

	obj.sortDescending(first, second, third);
	ASSERT_EQ(real_first, first);
	ASSERT_EQ(real_second, second);
    ASSERT_EQ(real_third, third);
}

TEST(PracticeTest, ascending_swapped)
{
	Practice obj;
	int first = 3;
	int second = 1;
	int third = 2;
	int real_first = 3;
	int real_second = 2;
	int real_third = 1;

	obj.sortDescending(first, second, third);
	ASSERT_EQ(real_first, first);
	ASSERT_EQ(real_second, second);
    ASSERT_EQ(real_third, third);
}
