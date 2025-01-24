#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDataInput;
class IDataOutput;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunkMetaData(::LevelChunkMetaData const& otherMetaData);

    MCAPI explicit LevelChunkMetaData(::IDataInput& stream);

    MCAPI void _recomputeHash() const;

    MCAPI uint64 getCurrentHash() const;

    MCAPI void serialize(::IDataOutput& stream) const;

    MCAPI ~LevelChunkMetaData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& INVALID_META_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelChunkMetaData const& otherMetaData);

    MCAPI void* $ctor(::IDataInput& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
