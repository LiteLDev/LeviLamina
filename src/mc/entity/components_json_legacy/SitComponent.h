#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
// clang-format on

class SitComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _sitEvent(::Actor& actor, bool sit);

    MCAPI ::InteractionResult getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
