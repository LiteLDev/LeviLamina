#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/events/WatchdogTerminateReason.h"

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateReason {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::WatchdogTerminateReason> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
