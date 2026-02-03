#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class OminousItemSpawner : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              mTicksBeforeRemoval;
    ::ll::TypedStorage<4, 4, int>              mHasTicked;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mItemToSpawn;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mDisplayEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    OminousItemSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void remove() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void baseTick() /*override*/;

    virtual ~OminousItemSpawner() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OminousItemSpawner(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _clientTick();

    MCAPI ::ItemStack const& _getItem();

    MCAPI void _onTimePassed();

    MCAPI void init(::ItemStack const& itemToSpawn, int ticksBeforeRemoval);

    MCAPI_C ::Actor* tryGetOrCreateDisplayEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $remove();

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $baseTick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
