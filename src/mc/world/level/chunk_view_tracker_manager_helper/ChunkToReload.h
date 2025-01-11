#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkViewTrackerManagerHelper {

struct ChunkToReload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 48> mUnk2c570b;
    ::ll::UntypedStorage<8, 16> mUnkbf7030;
    ::ll::UntypedStorage<1, 1>  mUnk966956;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkToReload& operator=(ChunkToReload const&);
    ChunkToReload(ChunkToReload const&);
    ChunkToReload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChunkToReload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ChunkViewTrackerManagerHelper
