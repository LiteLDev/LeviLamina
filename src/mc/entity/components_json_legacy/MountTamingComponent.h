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
    ::ll::UntypedStorage<4, 4> mUnk63f4c5;
    ::ll::UntypedStorage<4, 4> mUnk11cb63;
    ::ll::UntypedStorage<4, 4> mUnkf6aa4b;
    ::ll::UntypedStorage<4, 4> mUnk792c31;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTamingComponent& operator=(MountTamingComponent const&);
    MountTamingComponent(MountTamingComponent const&);
    MountTamingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _feedItem(::Actor& owner, ::Player& player, int temperModifier);

    MCAPI void becomeTame(::Actor& owner, bool tamingParticles);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void tameToPlayer(::Actor& owner, ::Player& player, bool tamingParticles);
    // NOLINTEND
};
