#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkac485a;
    ::ll::UntypedStorage<4, 12> mUnkb8bfcb;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockObject& operator=(BlockObject const&);
    BlockObject(BlockObject const&);
    BlockObject();
};
