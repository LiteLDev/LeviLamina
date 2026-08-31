#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerId;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerName;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
