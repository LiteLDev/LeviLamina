#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoundingBox {

public:
    // prevent constructor by default
    BoundingBox& operator=(BoundingBox const&) = delete;
    BoundingBox(BoundingBox const&)            = delete;
    BoundingBox()                              = delete;

public:
    /**
     * @symbol ??0BoundingBox\@\@QEAA\@AEBVBlockPos\@\@0W4Rotation\@\@\@Z
     */
    MCAPI BoundingBox(class BlockPos const&, class BlockPos const&, enum class Rotation); // NOLINT
    /**
     * @symbol ?isValid\@BoundingBox\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??8BoundingBox\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BoundingBox const&) const; // NOLINT
    /**
     * @symbol ?orientBox\@BoundingBox\@\@SA?AV1\@HHHHHHHHHH\@Z
     */
    MCAPI static class BoundingBox orientBox(int, int, int, int, int, int, int, int, int, int); // NOLINT
};
