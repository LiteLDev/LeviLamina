#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Slime : public ::Monster {
public:
    // Slime inner types define
    enum class ClientEvent : schar {
        None       = 0,
        JustLanded = 1,
        JustJumped = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          mTargetSquish;
    ::ll::TypedStorage<4, 4, ::ParticleType> mParticleType;
    ::ll::TypedStorage<4, 4, float>          mSquish;
    ::ll::TypedStorage<4, 4, float>          mOldSquish;
    // NOLINTEND

public:
    // prevent constructor by default
    Slime();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void remove() /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual bool doPlayLandSound();

    virtual void playJumpSound();

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual void decreaseSquish();

    virtual ::OwnerPtr<::EntityContext> createChild(int i);

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~Slime() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Slime(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCFOLD int getSlimeSize() const;

    MCAPI void justJumped();

    MCAPI void justLanded();

    MCAPI void postNormalTick(bool wasOnGround);

    MCAPI void setSlimeSize(int size);
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
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI float $getShadowRadius() const;

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $remove();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $doPlayLandSound();

    MCAPI void $playJumpSound();

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI void $decreaseSquish();

    MCAPI ::OwnerPtr<::EntityContext> $createChild(int i);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
