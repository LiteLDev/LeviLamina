#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkViewOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnkd9a3db;
    ::ll::UntypedStorage<1, 1>   mUnk948029;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewOwner& operator=(ChunkViewOwner const&);
    ChunkViewOwner(ChunkViewOwner const&);
    ChunkViewOwner();
};
