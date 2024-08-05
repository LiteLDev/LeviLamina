#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ShapeType.h"

namespace ClipUtils {
// NOLINTBEGIN
MCAPI class HitResult clip(class BlockPos const&, class Vec3 const&, class Vec3 const&, class AABB const&);

MCAPI class AABB const&
getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>);
// NOLINTEND

}; // namespace ClipUtils
