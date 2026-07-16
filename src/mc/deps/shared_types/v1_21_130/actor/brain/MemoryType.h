#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::Brain {

struct MemoryType {
public:
    // MemoryType inner types declare
    // clang-format off
    struct Names;
    // clang-format on

    // MemoryType inner types define
    enum class Value : uchar {
        Invalid     = 0,
        Bool        = 1,
        Int         = 2,
        Float       = 3,
        String      = 4,
        EntityRef   = 5,
        BlockPos    = 6,
        BlockPosVec = 7,
        PoiMemory   = 8,
        Count       = 9,
    };

    struct Names {};
};

} // namespace SharedTypes::v1_21_130::Brain
