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
    ::ll::TypedStorage<1, 1, bool>  mIsBoosting;
    ::ll::TypedStorage<4, 4, int>   mBoostTime;
    ::ll::TypedStorage<4, 4, int>   mBoostTimeTotal;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canUseItem(::Actor const& actor, ::ItemStack const& item);

    MCAPI void _useItem(::Actor& actor, ::ItemStack& item, ::Player& player);

    MCAPI void boost(::Actor& actor);

    MCAPI bool onItemInteract(::Actor& actor, ::ItemStack& item, ::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& SPEED_MODIFIER_BOOSTING_UUID();
    // NOLINTEND
};
