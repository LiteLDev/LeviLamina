#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"

class LevelChunkMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag> mMetaData;
    ::ll::TypedStorage<8, 8, uint64>         mCurrentHash;
    ::ll::TypedStorage<1, 1, bool>           mHashNeedsRecomputing;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _recomputeHash() const;

    MCNAPI ~LevelChunkMetaData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& INVALID_META_DATA();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
