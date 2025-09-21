#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MingleComponent;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~MingleGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _findNewPartner(::ActorUniqueID previousPartnerId);

    MCAPI ::MingleComponent& _getMingleComponent() const;

    MCAPI bool _isWithinInteractRange(::Actor& partner) const;

    MCAPI void _tickPartneredActive(::MingleComponent& mingleComponent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MingleComponent* _tryGetMingleComponent(::Actor& actor);
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
