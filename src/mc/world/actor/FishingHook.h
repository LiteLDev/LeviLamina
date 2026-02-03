#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/BlockPos.h"

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
    ::ll::TypedStorage<4, 4, int const>   NUM_PERCENTAGE_STEPS;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<4, 4, float>       mBobTimer;
    ::ll::TypedStorage<4, 4, float>       mFishAngle;
    ::ll::TypedStorage<4, 4, int>         mLife;
    ::ll::TypedStorage<4, 4, int>         mFlightTime;
    ::ll::TypedStorage<4, 4, int>         mTimeUntilHooked;
    ::ll::TypedStorage<4, 4, int>         mTimeUntilLured;
    ::ll::TypedStorage<4, 4, int>         mTimeUntilNibble;
    ::ll::TypedStorage<4, 4, int>         mFishingSpeed;
    ::ll::TypedStorage<1, 1, bool>        mInGround;
    // NOLINTEND

public:
    // prevent constructor by default
    FishingHook();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FishingHook() /*override*/ = default;

    virtual void remove() /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual bool shouldDropDeathLoot() const /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FishingHook(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

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
    // static variables
    // NOLINTBEGIN
    MCAPI_C static float const& BOBBER_SIZE();
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

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD float $getShadowRadius() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD bool $shouldDropDeathLoot() const;

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
