#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnUseTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponent& operator=(LegacyOnUseTriggerItemComponent const&);
    LegacyOnUseTriggerItemComponent(LegacyOnUseTriggerItemComponent const&);
    LegacyOnUseTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnUseTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnUseTriggerItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnUseTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0LegacyOnUseTriggerItemComponent@@QEAA@$$QEAULegacyOnUseTriggerItemComponentData@@@Z
    MCAPI explicit LegacyOnUseTriggerItemComponent(struct LegacyOnUseTriggerItemComponentData&&);

    // symbol: ?getIdentifier@LegacyOnUseTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_use@LegacyOnUseTriggerItemComponent@@AEAAXAEA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI void _use(bool&, class ItemStack&, class Player&);

    // NOLINTEND
};
