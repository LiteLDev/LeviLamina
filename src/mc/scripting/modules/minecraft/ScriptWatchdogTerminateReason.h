#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/WatchdogTerminateReason.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

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
