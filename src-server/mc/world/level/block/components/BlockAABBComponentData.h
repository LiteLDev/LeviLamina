#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/phys/AABB.h"

struct BlockAABBComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::TypedStorage<4, 24, ::AABB> mOriginalAABB;
    ::ll::TypedStorage<4, 24, ::AABB> mTransformedAABB;
    // NOLINTEND

};
