#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExpressionNodeInternal {

struct BlockAndPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk76a585;
    ::ll::UntypedStorage<4, 12> mUnka9f74f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAndPos& operator=(BlockAndPos const&);
    BlockAndPos(BlockAndPos const&);
    BlockAndPos();

};

}
