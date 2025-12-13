#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7ca7cb;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPtr& operator=(BlockPtr const&);
    BlockPtr(BlockPtr const&);
    BlockPtr();
};
