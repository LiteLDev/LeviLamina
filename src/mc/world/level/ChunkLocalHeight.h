#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLocalHeight {

public:
    short mVal = 0;
    explicit ChunkLocalHeight(short v) : mVal(v){};
    ChunkLocalHeight() : mVal(0){};
};
