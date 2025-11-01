#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubChunkLightIndex {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            uint mSubChunkBlockY : 4;
            uint mChunkIndexY : 2;
            uint mSubChunkBlockZ : 4;
            uint mChunkIndexZ : 2;
            uint mSubChunkBlockX : 4;
            uint mChunkIndexX : 2;
            uint mPad : 8;
        };
        struct {
            uint mToDoIndex : 18;
            uint mPad2 : 14;
        };
        ::ll::TypedStorage<4, 4, uint> mData;
    };
    // NOLINTEND

};
