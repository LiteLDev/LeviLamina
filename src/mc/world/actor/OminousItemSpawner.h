#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
struct ActorDefinitionIdentifier;
// clang-format on

class OminousItemSpawner : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk282299;
    ::ll::UntypedStorage<4, 4>   mUnk1d312a;
    ::ll::UntypedStorage<8, 152> mUnk44ad75;
    ::ll::UntypedStorage<8, 24>  mUnk7648eb;
    // NOLINTEND

public:
    // prevent constructor by default
    OminousItemSpawner& operator=(OminousItemSpawner const&);
    OminousItemSpawner(OminousItemSpawner const&);
    OminousItemSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 25
    virtual void baseTick() /*override*/;

    // vIndex: 8
    virtual ~OminousItemSpawner() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OminousItemSpawner(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _clientTick();

    MCNAPI ::ItemStack const& _getItem();

    MCNAPI void _onTimePassed();

    MCNAPI void init(::ItemStack const& itemToSpawn, int ticksBeforeRemoval);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $remove();

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $baseTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
