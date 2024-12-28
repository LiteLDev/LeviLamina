#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class GiveableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4012e3;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableComponent& operator=(GiveableComponent const&);
    GiveableComponent(GiveableComponent const&);
    GiveableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
