#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

class BoundingBox {
public:
    // prevent constructor by default
    BoundingBox& operator=(BoundingBox const&);
    BoundingBox(BoundingBox const&);
    BoundingBox();

public:
    // NOLINTBEGIN
    MCAPI BoundingBox(class BlockPos const& min, class BlockPos const& size, ::Rotation rotation);

    MCAPI bool isValid() const;

    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);

    // NOLINTEND
};
