#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct BlockHitInfo {
public:
    // prevent constructor by default
    BlockHitInfo& operator=(BlockHitInfo const&);
    BlockHitInfo(BlockHitInfo const&);
    BlockHitInfo();
};

}; // namespace ScriptModuleMinecraft::ScriptRaycasting
