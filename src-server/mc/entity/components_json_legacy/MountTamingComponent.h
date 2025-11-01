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
    MCNAPI void _feedItem(::Actor& owner, ::Player& player, int temperModifier);

    MCNAPI void becomeTame(::Actor& owner, bool tamingParticles);

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI void tameToPlayer(::Actor& owner, ::Player& player, bool tamingParticles);
    // NOLINTEND

};
