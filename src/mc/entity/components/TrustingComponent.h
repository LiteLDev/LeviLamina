#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Item;
class Player;
// clang-format on

struct TrustingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mChance;
    ::ll::TypedStorage<8, 16, ::std::set<::Item const*>> mTrustItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _becomeTrusting(::Actor& owner);

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
