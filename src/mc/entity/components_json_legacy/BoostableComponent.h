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
    ::ll::UntypedStorage<1, 1> mUnk22fc92;
    ::ll::UntypedStorage<4, 4> mUnk75c6d9;
    ::ll::UntypedStorage<4, 4> mUnkc3e906;
    ::ll::UntypedStorage<4, 4> mUnka56f75;
    // NOLINTEND

public:
    // prevent constructor by default
    BoostableComponent& operator=(BoostableComponent const&);
    BoostableComponent(BoostableComponent const&);
    BoostableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canUseItem(::Actor const& actor, ::ItemStack const& item);

    MCAPI int getBoostTime() const;

    MCAPI int getBoostTimeTotal() const;

    MCAPI bool getIsBoosting() const;

    MCAPI bool itemUseText(::Actor const& actor, ::ItemStack const& item, ::std::string& text);

    MCAPI bool onItemInteract(::Actor& actor, ::ItemStack& item, ::Player& player);

    MCAPI void setBoostTime(int boostTime);

    MCAPI void setIsBoosting(bool isBoosting);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::UUID getSpeedModifierUUID();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& SPEED_MODIFIER_BOOSTING_UUID();
    // NOLINTEND
};
