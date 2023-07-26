#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct EntityHitInfo {

public:
    // prevent constructor by default
    EntityHitInfo& operator=(EntityHitInfo const&) = delete;
    EntityHitInfo(EntityHitInfo const&)            = delete;
    EntityHitInfo()                                = delete;
};

}; // namespace ScriptModuleMinecraft::ScriptRaycasting
