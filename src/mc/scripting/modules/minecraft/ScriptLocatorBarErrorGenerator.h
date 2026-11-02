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
    MCNAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointAlreadyExistsError();

    MCNAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointLimitExceededError(int limit);

    MCNAPI static ::ScriptModuleMinecraft::ScriptLocatorBarError createWaypointNotFoundError();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
