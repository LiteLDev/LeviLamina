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
    MCAPI void* ctor$(class ScriptModuleGameTest::ScriptGameTestConnectivity const& other);

    MCAPI void* ctor$(bool north, bool east, bool south, bool west);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
