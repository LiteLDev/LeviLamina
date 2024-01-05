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
    // symbol: ??0ScriptGameTestConnectivity@ScriptModuleGameTest@@QEAA@AEBV01@@Z
    MCAPI ScriptGameTestConnectivity(class ScriptModuleGameTest::ScriptGameTestConnectivity const& other);

    // symbol: ??0ScriptGameTestConnectivity@ScriptModuleGameTest@@QEAA@_N000@Z
    MCAPI ScriptGameTestConnectivity(bool north, bool east, bool south, bool west);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
