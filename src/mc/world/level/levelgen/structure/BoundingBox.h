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
    // prevent constructor by default
    BoundingBox();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C BoundingBox(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);

    MCAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BoundingBox> intersect(::BoundingBox const& lhs, ::BoundingBox const& rhs);

    MCAPI static ::BoundingBox orientBox(
        int footX,
        int footY,
        int footZ,
        int offX,
        int offY,
        int offZ,
        int width,
        int height,
        int depth,
        int orientation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);
    // NOLINTEND
};
