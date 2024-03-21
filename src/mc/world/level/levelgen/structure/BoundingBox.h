#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class BoundingBox {
public:
    // prevent constructor by default
    BoundingBox& operator=(BoundingBox const&);
    BoundingBox(BoundingBox const&);
    BoundingBox();

public:
    // NOLINTBEGIN
    // symbol: ??0BoundingBox@@QEAA@AEBVBlockPos@@0W4Rotation@@@Z
    MCAPI BoundingBox(class BlockPos const& min, class BlockPos const& size, ::Rotation rotation);

    // symbol: ?isValid@BoundingBox@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?orientBox@BoundingBox@@SA?AV1@HHHHHHHHHH@Z
    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int);

    // NOLINTEND
};
