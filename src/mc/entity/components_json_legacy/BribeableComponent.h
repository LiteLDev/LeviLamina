#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BribeableDefinition;
class ItemStack;
class Player;
// clang-format on

class BribeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BribeableDefinition const*> mStaticData;
    ::ll::TypedStorage<4, 4, int>                          mBribeTimer;
    ::ll::TypedStorage<4, 4, int>                          mBribeCooldown;
    ::ll::TypedStorage<4, 4, int>                          mBribeCooldownTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _bribe(::Actor& owner, ::Player& player);

    MCNAPI bool _canBribe(::ItemStack const& item);

    MCNAPI bool clientBribeCheck(::Actor& owner);

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI void resetBribe(::Actor& owner);
    // NOLINTEND
};
