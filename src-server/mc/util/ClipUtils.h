#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class Vec3;
// clang-format on

namespace ClipUtils {
// functions
// NOLINTBEGIN
MCNAPI ::HitResult clip(::BlockPos const& pos, ::Vec3 const& A, ::Vec3 const& B, ::AABB const& aabb);

MCNAPI ::AABB const& getAABB(
    ::IConstBlockSource const&                         region,
    ::BlockPos const&                                  pos,
    ::Block const&                                     block,
    ::AABB&                                            bufferValue,
    ::ShapeType                                        aabbType,
    ::optional_ref<::GetCollisionShapeInterface const> entity
);
// NOLINTEND

} // namespace ClipUtils
