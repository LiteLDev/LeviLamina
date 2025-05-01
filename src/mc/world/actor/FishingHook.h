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
class Vec3;
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
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FishingHook(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _fishPosEvent();

    MCNAPI void _fishTeaseEvent();

    MCNAPI void _fishhookEvent();

    MCNAPI int _getServerFishSpeed();

    MCNAPI float _getWaterPercentage();

    MCNAPI ::HitResult _hitCheck();

    MCNAPI void _pullCloser(::Actor& inEntity, float inSpeed);

    MCNAPI bool _serverHooked();

    MCNAPI bool _serverLured();

    MCNAPI void _updateGravity();

    MCNAPI ::Actor* getFishingTarget();

    MCNAPI ::Actor* getOwner();

    MCNAPI void postNormalTick();

    MCNAPI int retrieve();

    MCNAPI void shoot(::Vec3 dir, float pow, float uncertainty);
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

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI bool $shouldDropDeathLoot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
