#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SpawnData : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkbe2905;
    ::ll::UntypedStorage<1, 1>   mUnk4ccd3d;
    ::ll::UntypedStorage<8, 64>  mUnkbee4d8;
    ::ll::UntypedStorage<4, 8>   mUnka5cdc4;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnData(SpawnData const&);
    SpawnData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SpawnData(::CompoundTag const& tag);

    MCNAPI ::SpawnData& operator=(::SpawnData const&);

    MCNAPI ::std::unique_ptr<::CompoundTag> save();

    MCNAPI ~SpawnData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
