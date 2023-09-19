#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct EntityHitInfo {
public:
    // prevent constructor by default
    EntityHitInfo& operator=(EntityHitInfo const&);
    EntityHitInfo(EntityHitInfo const&);
    EntityHitInfo();
};

}; // namespace ScriptModuleMinecraft::ScriptRaycasting
