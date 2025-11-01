#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class HitResult;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class FishingHook : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> SHOOT_SPEED;
    ::ll::TypedStorage<4, 4, float const> SHOOT_POWER;
    ::ll::TypedStorage<4, 4, int const> NUM_PERCENTAGE_STEPS;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<4, 4, float> mBobTimer;
    ::ll::TypedStorage<4, 4, float> mFishAngle;
    ::ll::TypedStorage<4, 4, int> mLife;
    ::ll::TypedStorage<4, 4, int> mFlightTime;
    ::ll::TypedStorage<4, 4, int> mTimeUntilHooked;
    ::ll::TypedStorage<4, 4, int> mTimeUntilLured;
    ::ll::TypedStorage<4, 4, int> mTimeUntilNibble;
    ::ll::TypedStorage<4, 4, int> mFishingSpeed;
    ::ll::TypedStorage<1, 1, bool> mInGround;
    // NOLINTEND

public:
    // prevent constructor by default
    FishingHook();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~FishingHook() /*override*/ = default;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 84
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 124
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FishingHook(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);

    MCAPI void _fishPosEvent();

    MCAPI void _fishTeaseEvent();

    MCAPI void _fishhookEvent();

    MCAPI int _getServerFishSpeed();

    MCAPI float _getWaterPercentage();

    MCAPI ::HitResult _hitCheck();

    MCAPI void _pullCloser(::Actor& inEntity, float inSpeed);

    MCAPI bool _serverHooked();

    MCAPI bool _serverLured();

    MCAPI void _updateGravity();

    MCAPI ::Actor* getFishingTarget();

    MCAPI ::Actor* getOwner();

    MCAPI void postNormalTick();

    MCAPI int retrieve();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionGroup* definitions, ::ActorDefinitionIdentifier const& definitionName, ::EntityContext& entityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $remove();

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD float $getShadowRadius() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD bool $shouldDropDeathLoot() const;

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
