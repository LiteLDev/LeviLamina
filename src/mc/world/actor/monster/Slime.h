#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
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
    // Slime inner types declare
    // clang-format off
    struct Parameters;
    // clang-format on

    // Slime inner types define
    enum class ClientEvent : schar {
        None       = 0,
        JustLanded = 1,
        JustJumped = 2,
    };

    struct Parameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            mBaseChildrenOnDeathCount;
        ::ll::TypedStorage<4, 4, int>            mMaxRandomAdditionalChildren;
        ::ll::TypedStorage<4, 4, int>            mMinSizeToPlayLandSound;
        ::ll::TypedStorage<4, 4, float>          mDecreaseSquishFactor;
        ::ll::TypedStorage<4, 4, ::ParticleType> mLandParticleType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::Slime::Parameters const> mParameters;
    ::ll::TypedStorage<4, 4, float>                      mTargetSquish;
    ::ll::TypedStorage<4, 4, float>                      mSquish;
    ::ll::TypedStorage<4, 4, float>                      mOldSquish;
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

    virtual bool canStartJumpSquish() const;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Slime(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::Slime::Parameters                parameters
    );

    MCAPI void _justJumped();

    MCAPI void _justLanded();

    MCAPI void postNormalTick(bool wasOnGround);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::Slime::Parameters                parameters
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI float $getShadowRadius() const;

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $remove();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCFOLD bool $canStartJumpSquish() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
