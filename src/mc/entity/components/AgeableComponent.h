#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

struct AgeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mAge;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
