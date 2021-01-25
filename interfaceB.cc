#include <iostream>
#include "./interface_b.h"
#include "interface.h"

void conan::interface_B() {
	std::cout << "Calling Interface B" << std::endl;
	conan::interface_A();
}	

/*
int main(int argc, char *argv[]) {
	conan::interface();

    testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
*/
