#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockTessellatorCache;
// clang-format on

class BlockOccluder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<6>>         mFacingOccluded;
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache&> mBlockCache;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockOccluder& operator=(BlockOccluder const&);
    BlockOccluder(BlockOccluder const&);
    BlockOccluder();
};
