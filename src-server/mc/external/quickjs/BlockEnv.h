#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockEnv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkff0a1a;
    ::ll::UntypedStorage<4, 4> mUnk14060b;
    ::ll::UntypedStorage<4, 4> mUnk7226b8;
    ::ll::UntypedStorage<4, 4> mUnk129f12;
    ::ll::UntypedStorage<4, 4> mUnkd7e083;
    ::ll::UntypedStorage<4, 4> mUnk2f1556;
    ::ll::UntypedStorage<4, 4> mUnkb7cd42;
    ::ll::UntypedStorage<4, 4> mUnk681bdc;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEnv& operator=(BlockEnv const&);
    BlockEnv(BlockEnv const&);
    BlockEnv();
};
