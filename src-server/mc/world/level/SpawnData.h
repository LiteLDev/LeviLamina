#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct ActorDefinitionIdentifier;
// clang-format on

class SpawnData : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkbe2905;
    ::ll::UntypedStorage<1, 1> mUnk4ccd3d;
    ::ll::UntypedStorage<8, 64> mUnkbee4d8;
    ::ll::UntypedStorage<4, 8> mUnka5cdc4;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnData(::SpawnData const&);

    MCNAPI explicit SpawnData(::CompoundTag const& tag);

    MCNAPI SpawnData(int randomWeight, ::ActorDefinitionIdentifier actorId);

    MCNAPI ::SpawnData& operator=(::SpawnData const&);

    MCNAPI ::std::unique_ptr<::CompoundTag> save();

    MCNAPI ~SpawnData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnData const&);

    MCNAPI void* $ctor(::CompoundTag const& tag);

    MCNAPI void* $ctor(int randomWeight, ::ActorDefinitionIdentifier actorId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
