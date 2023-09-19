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
    // symbol:
    // ?bind@ScriptWatchdogTerminateReason@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4WatchdogTerminateReason@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::WatchdogTerminateReason> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
