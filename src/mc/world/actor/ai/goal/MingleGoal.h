#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MingleComponent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MingleComponent;
class Mob;
struct ActorUniqueID;
// clang-format on

class MingleGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                           mCooldownTicksMax;
    ::ll::TypedStorage<4, 4, int>                           mMingleTicks;
    ::ll::TypedStorage<4, 4, int>                           mMingleTicksMax;
    ::ll::TypedStorage<4, 4, int>                           mAvailableTicks;
    ::ll::TypedStorage<4, 4, int>                           mAvailableTicksMax;
    ::ll::TypedStorage<4, 4, int>                           mSpeakInterval;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mDesiredPartnerType;
    ::ll::TypedStorage<4, 4, float>                         mMingleDistanceSquared;
    // NOLINTEND

public:
    // prevent constructor by default
    MingleGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MingleGoal(::Mob& actor);

    MCAPI void _findNewPartner(::ActorUniqueID previousPartnerId);

    MCAPI bool _isSuitablePartner(::Actor& partner, ::ActorUniqueID previousPartnerId);

    MCAPI void _lookAt(::Actor* partner);

    MCAPI void _partnerWith(::Actor& target);

    MCAPI void _tickMingling(::MingleComponent& mingleComponent);

    MCAPI void _tickPartneredActive(::MingleComponent& mingleComponent);

    MCAPI void _tickPartneredPassive(::MingleComponent& mingleComponent);

    MCAPI void _tickUnavailable(::MingleComponent& mingleComponent);

    MCAPI bool _tryPathToPartner(::Actor& partner);

    MCAPI bool _validatePartnerState(
        ::MingleComponent::MingleState expectedState,
        ::MingleComponent&             mingleComponent,
        bool                           requireWithinInteractRange
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& actor);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
