#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

struct LeashableToComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanRetrieveFrom;
    ::ll::TypedStorage<1, 1, bool> mCanLeashToWithoutSneaking;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
