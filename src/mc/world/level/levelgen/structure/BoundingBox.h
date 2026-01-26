#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

class BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> min;
    ::ll::TypedStorage<4, 12, ::BlockPos> max;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BoundingBox> intersect(::BoundingBox const& lhs, ::BoundingBox const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);
    // NOLINTEND
};
