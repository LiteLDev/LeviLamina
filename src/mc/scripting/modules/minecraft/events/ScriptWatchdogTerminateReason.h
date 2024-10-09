#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/events/WatchdogTerminateReason.h"

namespace ScriptModuleMinecraft {

class ScriptWatchdogTerminateReason {
public:
    // prevent constructor by default
    ScriptWatchdogTerminateReason& operator=(ScriptWatchdogTerminateReason const&);
    ScriptWatchdogTerminateReason(ScriptWatchdogTerminateReason const&);
    ScriptWatchdogTerminateReason();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::WatchdogTerminateReason> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
