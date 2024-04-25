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
    // symbol: ?getBoostTime@BoostableComponent@@QEBAHXZ
    MCAPI int getBoostTime() const;

    // symbol: ?getBoostTimeTotal@BoostableComponent@@QEBAHXZ
    MCAPI int getBoostTimeTotal() const;

    // symbol: ?getIsBoosting@BoostableComponent@@QEBA_NXZ
    MCAPI bool getIsBoosting() const;

    // symbol:
    // ?itemUseText@BoostableComponent@@QEAA_NAEBVActor@@AEBVItemStack@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool itemUseText(class Actor const&, class ItemStack const&, std::string&);

    // symbol: ?onItemInteract@BoostableComponent@@QEAA_NAEAVActor@@AEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool onItemInteract(class Actor& actor, class ItemStack& item, class Player& player);

    // symbol: ?setBoostTime@BoostableComponent@@QEAAXH@Z
    MCAPI void setBoostTime(int boostTime);

    // symbol: ?setIsBoosting@BoostableComponent@@QEAAX_N@Z
    MCAPI void setIsBoosting(bool isBoosting);

    // symbol: ?getSpeedModifierUUID@BoostableComponent@@SA?AVUUID@mce@@XZ
    MCAPI static class mce::UUID getSpeedModifierUUID();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canUseItem@BoostableComponent@@AEAA_NAEBVActor@@AEBVItemStack@@@Z
    MCAPI bool _canUseItem(class Actor const&, class ItemStack const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SPEED_MODIFIER_BOOSTING_UUID@BoostableComponent@@0VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;

    // NOLINTEND
};
