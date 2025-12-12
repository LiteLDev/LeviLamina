#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct BlockHitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7bf503;
    ::ll::UntypedStorage<1, 1>  mUnkf88283;
    ::ll::UntypedStorage<4, 12> mUnk79536b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockHitInfo& operator=(BlockHitInfo const&);
    BlockHitInfo(BlockHitInfo const&);
    BlockHitInfo();
};

} // namespace ScriptModuleMinecraft::ScriptRaycasting
