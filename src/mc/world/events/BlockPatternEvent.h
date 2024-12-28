#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk486439;
    ::ll::UntypedStorage<4, 12>  mUnk5b3bc5;
    ::ll::UntypedStorage<8, 24>  mUnk2f8831;
    ::ll::UntypedStorage<8, 16>  mUnk8746ca;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternEvent& operator=(BlockPatternEvent const&);
    BlockPatternEvent(BlockPatternEvent const&);
    BlockPatternEvent();
};
