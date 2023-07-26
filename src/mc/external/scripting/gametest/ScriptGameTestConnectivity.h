#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleGameTest {

class ScriptGameTestConnectivity {

public:
    // prevent constructor by default
    ScriptGameTestConnectivity& operator=(ScriptGameTestConnectivity const&) = delete;
    ScriptGameTestConnectivity()                                             = delete;

public:
    /**
     * @symbol ??0ScriptGameTestConnectivity\@ScriptModuleGameTest\@\@QEAA\@_N000\@Z
     */
    MCAPI ScriptGameTestConnectivity(bool, bool, bool, bool); // NOLINT
    /**
     * @symbol ??0ScriptGameTestConnectivity\@ScriptModuleGameTest\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptGameTestConnectivity(class ScriptModuleGameTest::ScriptGameTestConnectivity const&); // NOLINT
};

}; // namespace ScriptModuleGameTest
