#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct EntityHitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*> actor;
    ::ll::TypedStorage<4, 24, ::AABB>  aabb;
    ::ll::TypedStorage<4, 4, float>    distance;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptRaycasting
