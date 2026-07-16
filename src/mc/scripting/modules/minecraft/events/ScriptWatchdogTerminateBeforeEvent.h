#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/WatchdogTerminateReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::WatchdogTerminateReason> mTerminateReason;
    ::ll::TypedStorage<1, 1, bool>                      mCancel;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::Scripting::ClassBinding bind();
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
