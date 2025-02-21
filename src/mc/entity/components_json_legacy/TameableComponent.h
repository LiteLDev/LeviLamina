#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
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
    MCAPI bool _attemptToTame(::Actor& owner, ::Player& player);

    MCAPI bool _canTame(::Actor& owner, ::Player& player);

    MCAPI void tame(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _becomeTame(::Actor& owner);
    // NOLINTEND
};
