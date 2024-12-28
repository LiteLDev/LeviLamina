#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class TameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9970b0;
    ::ll::UntypedStorage<8, 16> mUnka41297;
    // NOLINTEND

public:
    // prevent constructor by default
    TameableComponent& operator=(TameableComponent const&);
    TameableComponent(TameableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TameableComponent();

    MCAPI bool _attemptToTame(::Actor& owner, ::Player& player);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void tame(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _becomeTame(::Actor& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
