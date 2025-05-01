#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk77b41b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateRegistry& operator=(BlockStateRegistry const&);
    BlockStateRegistry(BlockStateRegistry const&);
    BlockStateRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockStateRegistry& get();
    // NOLINTEND
};
