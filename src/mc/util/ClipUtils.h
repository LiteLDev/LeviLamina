#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"

namespace ClipUtils {
// NOLINTBEGIN
MCAPI class HitResult clip(class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, class AABB const& aabb);

MCAPI class AABB const& getAABB(
    class IConstBlockSource const&                             region,
    class BlockPos const&                                      pos,
    class Block const&                                         block,
    class AABB&                                                bufferValue,
    ::ShapeType                                                aabbType,
    class optional_ref<class GetCollisionShapeInterface const> entity
);
// NOLINTEND

}; // namespace ClipUtils
