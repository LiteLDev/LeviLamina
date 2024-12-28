#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

class LevelChunkMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1e26b3;
    ::ll::UntypedStorage<8, 8>  mUnk79104c;
    ::ll::UntypedStorage<1, 1>  mUnk5525bc;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);
    LevelChunkMetaData();

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
