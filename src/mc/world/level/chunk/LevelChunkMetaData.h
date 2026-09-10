#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
// clang-format on

class LevelChunkMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag> mMetaData;
    ::ll::TypedStorage<8, 8, uint64>         mCurrentHash;
    ::ll::TypedStorage<1, 1, bool>           mHashNeedsRecomputing;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);
    LevelChunkMetaData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunkMetaData(::LevelChunkMetaData const& otherMetaData);

#ifdef LL_PLAT_S
    MCAPI explicit LevelChunkMetaData(::IDataInput& stream);
#endif

    MCAPI void _recomputeHash() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelChunkMetaData const& otherMetaData);

#ifdef LL_PLAT_S
    MCAPI void* $ctor(::IDataInput& stream);
#endif
    // NOLINTEND
};
