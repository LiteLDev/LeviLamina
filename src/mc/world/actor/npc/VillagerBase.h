#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class VillagerBase : public ::Mob {
public:
    // VillagerBase inner types define
    enum class BiomeType : int {
        Plains   = 0,
        Desert   = 1,
        Jungle   = 2,
        Savannah = 3,
        Snow     = 4,
        Swamp    = 5,
        Taiga    = 6,
        Count    = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mChasing;
    ::ll::TypedStorage<1, 1, bool> mWillingToBreed;
    // NOLINTEND

public:
    // prevent constructor by default
    VillagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 67
    virtual void onLightningHit() /*override*/;

    // vIndex: 8
    virtual ~VillagerBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VillagerBase(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _addParticlesAroundSelf(::ParticleType particleType);

    MCAPI void consumeLoveFood();

    MCAPI int getBreedingStackIndex() const;
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onLightningHit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
