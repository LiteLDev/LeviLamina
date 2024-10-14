#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleGameTest {

class ScriptGameTestConnectivity {
public:
    // prevent constructor by default
    ScriptGameTestConnectivity& operator=(ScriptGameTestConnectivity const&);
    ScriptGameTestConnectivity();

public:
    // NOLINTBEGIN
    MCAPI ScriptGameTestConnectivity(class ScriptModuleGameTest::ScriptGameTestConnectivity const& other);

    MCAPI ScriptGameTestConnectivity(bool north, bool east, bool south, bool west);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
