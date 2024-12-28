#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<1, 1> mUnkd8d515;
            ::ll::UntypedStorage<1, 1> mUnk2e8f1a;
            ::ll::UntypedStorage<1, 1> mUnk8d27ff;
        };
        ::ll::UntypedStorage<4, 4> mUnk46c9f8;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkBlockPos& operator=(SubChunkBlockPos const&);
    SubChunkBlockPos(SubChunkBlockPos const&);
    SubChunkBlockPos();
};
