#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnHitActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponent& operator=(LegacyOnHitActorTriggerItemComponent const&);
    LegacyOnHitActorTriggerItemComponent(LegacyOnHitActorTriggerItemComponent const&);
    LegacyOnHitActorTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnHitActorTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnHitActorTriggerItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnHitActorTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0LegacyOnHitActorTriggerItemComponent@@QEAA@$$QEAULegacyOnHitActorTriggerItemComponentData@@@Z
    MCAPI explicit LegacyOnHitActorTriggerItemComponent(struct LegacyOnHitActorTriggerItemComponentData&&);

    // symbol: ?getIdentifier@LegacyOnHitActorTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onHitActor@LegacyOnHitActorTriggerItemComponent@@AEAAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    MCAPI void _onHitActor(class ItemStack&, class Actor&, class Mob&);

    // NOLINTEND
};
