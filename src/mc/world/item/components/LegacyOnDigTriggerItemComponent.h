#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnDigTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponent& operator=(LegacyOnDigTriggerItemComponent const&);
    LegacyOnDigTriggerItemComponent(LegacyOnDigTriggerItemComponent const&);
    LegacyOnDigTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnDigTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnDigTriggerItemComponent() = default;

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@LegacyOnDigTriggerItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnDigTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0LegacyOnDigTriggerItemComponent@@QEAA@$$QEAULegacyOnDigTriggerItemComponentData@@@Z
    MCAPI explicit LegacyOnDigTriggerItemComponent(struct LegacyOnDigTriggerItemComponentData&&);

    // symbol: ?getIdentifier@LegacyOnDigTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onMineBlock@LegacyOnDigTriggerItemComponent@@AEAAXAEA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    MCAPI void _onMineBlock(bool&, class ItemStack&, class Block const&, int, int, int, class Actor*);

    // NOLINTEND
};
