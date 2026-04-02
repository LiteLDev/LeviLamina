#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/item/ItemDescriptor.h"

struct SpawnActorParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mSpawnTimeMin;
    ::ll::TypedStorage<4, 4, int>                                    mSpawnTimeMax;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSpawnSound;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                      mItemDescriptor;
    ::ll::TypedStorage<8, 32, ::std::string>                         mEntityDefinition;
    ::ll::TypedStorage<8, 32, ::std::string>                         mSpawnMethod;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnItemSpawnEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    mFilters;
    ::ll::TypedStorage<1, 1, bool>                                   mSingleUse;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldLeash;
    ::ll::TypedStorage<4, 4, int>                                    mNumToSpawn;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnActorParameters();

    MCAPI SpawnActorParameters(::SpawnActorParameters&&);

    MCAPI SpawnActorParameters(::SpawnActorParameters const&);

    MCAPI void setItem(::ItemDescriptor const& itemDescriptor);

    MCAPI void setSpawnEntity(::std::string const& name);

    MCAPI void setSpawnEvent(::std::string const& name);

    MCAPI void setSpawnSound(::std::string const& name);

    MCAPI void setSpawnTimeMax(int const& value);

    MCAPI void setSpawnTimeMin(int const& value);

    MCAPI ~SpawnActorParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SpawnActorParameters&&);

    MCAPI void* $ctor(::SpawnActorParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
