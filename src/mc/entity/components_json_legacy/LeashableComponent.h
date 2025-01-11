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
    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void leash(::Actor& owner, ::Actor& leashHolder);

    MCAPI void unleash(::Actor& owner);
    // NOLINTEND
};
