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
    MCNAPI FishingHook(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI float _getWaterPercentage();

    MCAPI void _pullCloser(::Actor& inEntity, float inSpeed);

    MCAPI void postNormalTick();

    MCAPI int retrieve();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $remove();

    MCNAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
