#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class TrustingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfacd32;
    ::ll::UntypedStorage<8, 16> mUnk934ba9;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustingComponent& operator=(TrustingComponent const&);
    TrustingComponent(TrustingComponent const&);
    TrustingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _becomeTrusting(::Actor& owner);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
