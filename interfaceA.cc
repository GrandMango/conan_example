#include <iostream>
#include "./interface.h"
	
void conan::interface_A() {
	std::cout << "Calling Interface A" << std::endl;
}	

/*
int main(int argc, char *argv[]) {
	conan::interface();

    testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
*/
