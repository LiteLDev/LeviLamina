#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleGameTest {

class ScriptGameTestDebug {
public:
    // prevent constructor by default
    ScriptGameTestDebug& operator=(ScriptGameTestDebug const&);
    ScriptGameTestDebug(ScriptGameTestDebug const&);
    ScriptGameTestDebug();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleGameTest::ScriptGameTestDebug> bind();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
