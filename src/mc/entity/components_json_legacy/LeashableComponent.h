#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class LeashableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI void leash(::Actor& owner, ::Actor& leashHolder);

    MCNAPI void unleash(::Actor& owner);
    // NOLINTEND
};
