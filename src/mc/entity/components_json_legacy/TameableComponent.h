#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    TameableComponent();

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
