#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPosIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk930aa6;
    ::ll::UntypedStorage<4, 12> mUnk3ceb0e;
    ::ll::UntypedStorage<4, 12> mUnkcf1b1b;
    ::ll::UntypedStorage<1, 1>  mUnk3bd65d;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkPosIterator& operator=(SubChunkPosIterator const&);
    SubChunkPosIterator(SubChunkPosIterator const&);
    SubChunkPosIterator();
};
