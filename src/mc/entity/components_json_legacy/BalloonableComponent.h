#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class ItemStack;
class Player;
// clang-format on

class BalloonableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool attach(::Actor& owner, ::Actor& attacher, ::ItemStack& item);

    MCAPI void detach(::Actor& owner, ::Actor& balloon);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
