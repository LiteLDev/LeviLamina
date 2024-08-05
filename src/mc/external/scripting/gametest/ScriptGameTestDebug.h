#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleGameTest {

class ScriptGameTestDebug {
public:
    // prevent constructor by default
    ScriptGameTestDebug& operator=(ScriptGameTestDebug const&);
    ScriptGameTestDebug(ScriptGameTestDebug const&);
    ScriptGameTestDebug();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptGameTestDebug> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
