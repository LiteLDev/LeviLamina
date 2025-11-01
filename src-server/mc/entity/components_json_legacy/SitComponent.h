#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class SitComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sitEvent(::Actor& actor, bool sit);

    MCNAPI bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
