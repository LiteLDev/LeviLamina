#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5ef7c7;
    ::ll::UntypedStorage<8, 8> mUnk2089bd;
    ::ll::UntypedStorage<8, 8> mUnkf3f3c1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChange& operator=(BlockChange const&);
    BlockChange(BlockChange const&);
    BlockChange();
};
