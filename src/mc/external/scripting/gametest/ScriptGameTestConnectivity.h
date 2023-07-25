#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleGameTest {

class ScriptGameTestConnectivity {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEGAMETEST_SCRIPTGAMETESTCONNECTIVITY
public:
    ScriptGameTestConnectivity& operator=(ScriptGameTestConnectivity const&) = delete;
    ScriptGameTestConnectivity()                                             = delete;
#endif

public:
    /**
     * @symbol ??0ScriptGameTestConnectivity\@ScriptModuleGameTest\@\@QEAA\@_N000\@Z
     */
    MCAPI ScriptGameTestConnectivity(bool, bool, bool, bool);
    /**
     * @symbol ??0ScriptGameTestConnectivity\@ScriptModuleGameTest\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptGameTestConnectivity(class ScriptModuleGameTest::ScriptGameTestConnectivity const&);
};

}; // namespace ScriptModuleGameTest
