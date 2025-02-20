#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Player;
// clang-format on

class BribeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka5d8c2;
    ::ll::UntypedStorage<4, 4> mUnk9f3db7;
    ::ll::UntypedStorage<4, 4> mUnkbf9dd5;
    ::ll::UntypedStorage<4, 4> mUnk15c67a;
    // NOLINTEND

public:
    // prevent constructor by default
    BribeableComponent& operator=(BribeableComponent const&);
    BribeableComponent(BribeableComponent const&);
    BribeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _bribe(::Actor& owner, ::Player& player);

    MCAPI bool _canBribe(::ItemStack const& item);

    MCAPI bool clientBribeCheck(::Actor& owner);
    // NOLINTEND
};
