#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnCompleteTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponent& operator=(LegacyOnCompleteTriggerItemComponent const&);
    LegacyOnCompleteTriggerItemComponent(LegacyOnCompleteTriggerItemComponent const&);
    LegacyOnCompleteTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnCompleteTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnCompleteTriggerItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnCompleteTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ?getIdentifier@LegacyOnCompleteTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_onUseTimeDepleted@LegacyOnCompleteTriggerItemComponent@@AEAAXAEAW4ItemUseMethod@@AEBVItemStack@@AEAV3@AEAVPlayer@@AEAVLevel@@@Z
    MCAPI void
    _onUseTimeDepleted(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&);

    // NOLINTEND
};
