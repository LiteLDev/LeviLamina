#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MingleComponent;
class Mob;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
// clang-format on

class MingleGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk62cb1f;
    ::ll::UntypedStorage<4, 4>   mUnk947b34;
    ::ll::UntypedStorage<4, 4>   mUnkf06177;
    ::ll::UntypedStorage<4, 4>   mUnkc79cdd;
    ::ll::UntypedStorage<4, 4>   mUnk679cd1;
    ::ll::UntypedStorage<4, 4>   mUnkf33af9;
    ::ll::UntypedStorage<4, 4>   mUnkf11392;
    ::ll::UntypedStorage<8, 176> mUnkac777a;
    ::ll::UntypedStorage<4, 4>   mUnk50a0e7;
    // NOLINTEND

public:
    // prevent constructor by default
    MingleGoal& operator=(MingleGoal const&);
    MingleGoal(MingleGoal const&);
    MingleGoal();

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
    virtual ~MingleGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MingleGoal(
        ::Mob&                      actor,
        float                       speedModifier,
        float                       mingleDurationSecs,
        float                       cooldownDurationSecs,
        ::ActorDefinitionIdentifier desiredPartnerType,
        float                       mingleDistance
    );

    MCAPI void _findNewPartner(::ActorUniqueID previousPartnerId);

    MCAPI ::MingleComponent& _getMingleComponent() const;

    MCAPI bool _isWithinInteractRange(::Actor& partner) const;

    MCAPI void _partnerWith(::Actor& target);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MingleComponent* _tryGetMingleComponent(::Actor& actor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& FIND_PARTNER_INTERVAL_TICKS();

    MCAPI static int const& SPEAK_INTERVAL_TICKS_MAX();

    MCAPI static int const& SPEAK_INTERVAL_TICKS_MIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                      actor,
        float                       speedModifier,
        float                       mingleDurationSecs,
        float                       cooldownDurationSecs,
        ::ActorDefinitionIdentifier desiredPartnerType,
        float                       mingleDistance
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
