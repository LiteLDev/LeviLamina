#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct ActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                          mRuntimeId;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mBaseIdentifier;
    ::ll::TypedStorage<1, 1, bool>                          mHasSpawnEgg;
    ::ll::TypedStorage<1, 1, bool>                          mIsSummonable;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>          mExperimentIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInfo& operator=(ActorInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorInfo();

    MCAPI ActorInfo(::ActorInfo const&);

    MCAPI void load(::CompoundTag const* tag);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI ~ActorInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
