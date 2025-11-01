#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Player;
namespace mce { class UUID; }
// clang-format on

class BoostableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsBoosting;
    ::ll::TypedStorage<4, 4, int> mBoostTime;
    ::ll::TypedStorage<4, 4, int> mBoostTimeTotal;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canUseItem(::Actor const& actor, ::ItemStack const& item);

    MCNAPI void _useItem(::Actor& actor, ::ItemStack& item, ::Player& player);

    MCNAPI void boost(::Actor& actor);

    MCNAPI bool onItemInteract(::Actor& actor, ::ItemStack& item, ::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& SPEED_MODIFIER_BOOSTING_UUID();
    // NOLINTEND

};
