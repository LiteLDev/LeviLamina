#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk77ec13;
    ::ll::UntypedStorage<1, 1> mUnkdff9e1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWatchdogTerminateBeforeEvent& operator=(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
