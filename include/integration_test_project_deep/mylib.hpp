#include <string>

namespace tipi::integration_tests::project_deep {

    using namespace std::string_literals;

    inline std::string library_call() {
        return "tipi-build/integration_test_project_deep@as-submodule::library_call()"s; 
    }
}