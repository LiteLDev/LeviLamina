#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

class TameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mChance;
    ::ll::TypedStorage<8, 16, ::std::set<::Item const*>> mTameItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _attemptToTame(::Actor& owner, ::Player& player);

    MCNAPI bool _canTame(::Actor& owner, ::Player& player);

    MCNAPI void tame(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _becomeTame(::Actor& owner);
    // NOLINTEND
};
