#include <gtest/gtest.h>
#include <iostream>
#include "./interface.h"
	
void conan::interface() {
	std::cout << "Calling Interface" << std::endl;
}	

TEST(TEST_EXAMPLE, should_return_true) {
	EXPECT_EQ(1, 1);
}

/*
int main(int argc, char *argv[]) {
	conan::interface();

    testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
*/
