#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnHitBlockTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponent& operator=(LegacyOnHitBlockTriggerItemComponent const&);
    LegacyOnHitBlockTriggerItemComponent(LegacyOnHitBlockTriggerItemComponent const&);
    LegacyOnHitBlockTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnHitBlockTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnHitBlockTriggerItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnHitBlockTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0LegacyOnHitBlockTriggerItemComponent@@QEAA@$$QEAULegacyOnHitBlockTriggerItemComponentData@@@Z
    MCAPI explicit LegacyOnHitBlockTriggerItemComponent(struct LegacyOnHitBlockTriggerItemComponentData&&);

    // symbol: ?getIdentifier@LegacyOnHitBlockTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_onHitBlock@LegacyOnHitBlockTriggerItemComponent@@AEAAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
    MCAPI void _onHitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&);

    // NOLINTEND
};
