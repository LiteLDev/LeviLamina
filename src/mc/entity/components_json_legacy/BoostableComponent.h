#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BoostableComponent {
public:
    // prevent constructor by default
    BoostableComponent& operator=(BoostableComponent const&);
    BoostableComponent(BoostableComponent const&);
    BoostableComponent();

public:
    // NOLINTBEGIN
    MCAPI int getBoostTime() const;

    MCAPI int getBoostTimeTotal() const;

    MCAPI bool getIsBoosting() const;

    MCAPI bool itemUseText(class Actor const& actor, class ItemStack const& item, std::string& text);

    MCAPI bool onItemInteract(class Actor& actor, class ItemStack& item, class Player& player);

    MCAPI void setBoostTime(int boostTime);

    MCAPI void setIsBoosting(bool isBoosting);

    MCAPI static class mce::UUID getSpeedModifierUUID();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canUseItem(class Actor const& actor, class ItemStack const& item);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;

    // NOLINTEND
};
