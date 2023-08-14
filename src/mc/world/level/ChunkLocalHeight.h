#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLocalHeight {

public:
    short mVal = 0;
    explicit constexpr ChunkLocalHeight(short v) noexcept : mVal(v){};
    constexpr ChunkLocalHeight() noexcept : mVal(0){};
};
