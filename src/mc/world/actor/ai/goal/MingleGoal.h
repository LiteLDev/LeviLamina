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
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~MingleGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _findNewPartner(::ActorUniqueID previousPartnerId);

    MCNAPI ::MingleComponent& _getMingleComponent() const;

    MCNAPI bool _tryPathToPartner(::Actor& partner);

    MCNAPI bool _validatePartnerState(
        ::MingleComponent::MingleState expectedState,
        ::MingleComponent&             mingleComponent,
        bool                           requireWithinInteractRange
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
