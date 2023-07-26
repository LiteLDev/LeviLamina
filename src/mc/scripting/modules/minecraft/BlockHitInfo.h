#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct BlockHitInfo {

public:
    // prevent constructor by default
    BlockHitInfo& operator=(BlockHitInfo const&) = delete;
    BlockHitInfo(BlockHitInfo const&)            = delete;
    BlockHitInfo()                               = delete;
};

}; // namespace ScriptModuleMinecraft::ScriptRaycasting
