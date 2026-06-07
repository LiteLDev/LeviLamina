#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentRedstoneUpdateEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mSignalLevel;
    ::ll::TypedStorage<2, 2, short> mPreviousSignalLevel;
    ::ll::TypedStorage<1, 1, bool>  mIsFirstUpdate;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
