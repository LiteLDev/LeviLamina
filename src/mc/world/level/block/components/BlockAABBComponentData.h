#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockAABBComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3c0db8;
    ::ll::UntypedStorage<4, 24> mUnkd07040;
    ::ll::UntypedStorage<4, 24> mUnka0b137;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAABBComponentData& operator=(BlockAABBComponentData const&);
    BlockAABBComponentData(BlockAABBComponentData const&);
    BlockAABBComponentData();
};
