#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
// clang-format on

class GiveableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mCooldownTimeStamps;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
