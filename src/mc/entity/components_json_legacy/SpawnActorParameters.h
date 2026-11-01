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
    SpawnActorParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnActorParameters(::SpawnActorParameters&&);

    MCNAPI SpawnActorParameters(::SpawnActorParameters const&);

    MCNAPI void setItem(::ItemDescriptor const& itemDescriptor);

    MCNAPI void setSpawnEntity(::std::string const& name);

    MCNAPI void setSpawnEvent(::std::string const& name);

    MCNAPI void setSpawnSound(::std::string const& name);

    MCNAPI void setSpawnTimeMax(int const& value);

    MCNAPI void setSpawnTimeMin(int const& value);

    MCNAPI ~SpawnActorParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnActorParameters&&);

    MCNAPI void* $ctor(::SpawnActorParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
