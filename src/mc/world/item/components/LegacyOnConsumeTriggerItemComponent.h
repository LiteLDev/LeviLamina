#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnConsumeTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponent& operator=(LegacyOnConsumeTriggerItemComponent const&);
    LegacyOnConsumeTriggerItemComponent(LegacyOnConsumeTriggerItemComponent const&);
    LegacyOnConsumeTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnConsumeTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnConsumeTriggerItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnConsumeTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ?getIdentifier@LegacyOnConsumeTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_consume@LegacyOnConsumeTriggerItemComponent@@AEAAXAEBVItemStack@@AEAV2@AEAVActor@@@Z
    MCAPI void _consume(class ItemStack const&, class ItemStack&, class Actor&);

    // NOLINTEND
};
