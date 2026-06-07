#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptLocatorBarError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocatorBarErrorGenerator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointAlreadyExistsError();

    MCAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointLimitExceededError(int limit);

    MCAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointNotFoundError();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
