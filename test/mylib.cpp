#include "integration_test_project_deep/mylib.hpp"
#include <iostream>

int main() {
    std::cout << "Hello world from tipi - this is integration-test-project-deep/test/mylib.cpp::main()" << std::endl;
    std::cout << "Calling mylib::library_call() => " << tipi::integration_tests::project_deep::library_call() << std::endl;
    return 0;
}