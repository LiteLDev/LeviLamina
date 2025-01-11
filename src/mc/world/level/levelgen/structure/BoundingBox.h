#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

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

    MCAPI BoundingBox(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);

    MCAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);

    MCAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BoundingBox> intersect(::BoundingBox const& lhs, ::BoundingBox const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);
    // NOLINTEND
};
