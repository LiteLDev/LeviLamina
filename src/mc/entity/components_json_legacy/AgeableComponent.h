#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class AgeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc89fef;
    // NOLINTEND

public:
    // prevent constructor by default
    AgeableComponent& operator=(AgeableComponent const&);
    AgeableComponent(AgeableComponent const&);
    AgeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
