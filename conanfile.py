from conans import ConanFile, CMake, tools


class DependencyConan(ConanFile):
    name = "dependency"
    version = "0.0.1"
    license = "MIT"
    author = "GrandMango test@test.com"
    url = ""
    description = ""
    topics = ("gtest")
    requires = [("gtest/1.10.0")]
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = {"shared": False}
    generators = "cmake"

    def source(self):
        self.run("git clone -b dependency_test https://github.com/GrandMango/conan_example.git")

    def build(self):
        cmake = CMake(self)
        cmake.configure(source_folder="conan_example")
        print("---------")
        print(cmake.build_config)
        print("---------")
        cmake.build()

        # Explicit way:
        # self.run('cmake %s/hello %s'
        #          % (self.source_folder, cmake.command_line))
        # self.run("cmake --build . %s" % cmake.build_config)

    def package(self):
        self.copy("*.h", dst="include", src="conan_example")
        self.copy("*.lib", dst="lib", keep_path=False)
        self.copy("*", dst="bin", keep_path=False)
        self.copy("*.so", dst="lib", keep_path=False)
        self.copy("*.dylib", dst="lib", keep_path=False)
        self.copy("*.a", dst="lib", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = ["dependency_test"]

