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
    MCAPI BoundingBox();

    MCAPI BoundingBox(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);

    MCAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);

    MCFOLD bool isValid() const;
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
    MCFOLD void* $ctor();

    MCAPI void* $ctor(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);
    // NOLINTEND
};
