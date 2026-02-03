#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct BlockHitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> pos;
    ::ll::TypedStorage<1, 1, uchar>       face;
    ::ll::TypedStorage<4, 12, ::Vec3>     faceLocation;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptRaycasting
