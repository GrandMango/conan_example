#include <iostream>
#include "interface.h"
#include "gtest/gtest.h"

TEST(TEST_EXAMPLE, should_return_true) {
	EXPECT_EQ(1, 1);
}

int main(int argc, char* argv[]) {
	std::cout << "-------------" << std::endl;
    conan::interface();
	std::cout << "-------------" << std::endl;
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
