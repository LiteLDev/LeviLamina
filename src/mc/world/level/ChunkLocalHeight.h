#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLocalHeight {
public:
    short mVal = 0;
    [[nodiscard]] constexpr explicit ChunkLocalHeight(short v) noexcept : mVal(v){};
    [[nodiscard]] constexpr ChunkLocalHeight() noexcept : mVal(0){};
};
