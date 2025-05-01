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
    MCNAPI BoundingBox();

    MCNAPI BoundingBox(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);

    MCNAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);

    MCNAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::BoundingBox> intersect(::BoundingBox const& lhs, ::BoundingBox const& rhs);

    MCNAPI static ::BoundingBox orientBox(
        int footX,
        int footY,
        int footZ,
        int offX,
        int offY,
        int width,
        int height,
        int depth,
        int orientation,
        int offZ
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);
    // NOLINTEND
};
