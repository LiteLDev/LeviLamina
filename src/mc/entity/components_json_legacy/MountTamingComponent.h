#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class MountTamingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTemper;
    ::ll::TypedStorage<4, 4, int> mCounter;
    ::ll::TypedStorage<4, 4, int> mTemperMod;
    ::ll::TypedStorage<4, 4, int> mWaitCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _feedItem(::Actor& owner, ::Player& player, int temperModifier);

    MCAPI void becomeTame(::Actor& owner, bool tamingParticles);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void tameToPlayer(::Actor& owner, ::Player& player, bool tamingParticles);
    // NOLINTEND
};
