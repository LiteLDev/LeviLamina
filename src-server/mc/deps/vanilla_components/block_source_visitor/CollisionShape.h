#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/versionless/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace BlockSourceVisitor {

struct CollisionShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mMaybeBlock;
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<1, 1, bool> mIsUnloadedChunk;
    // NOLINTEND

};

}
