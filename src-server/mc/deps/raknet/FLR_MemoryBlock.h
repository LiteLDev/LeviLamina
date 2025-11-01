#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct FLR_MemoryBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb30b49;
    // NOLINTEND

public:
    // prevent constructor by default
    FLR_MemoryBlock& operator=(FLR_MemoryBlock const&);
    FLR_MemoryBlock(FLR_MemoryBlock const&);
    FLR_MemoryBlock();

};

}
