#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnHurtActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponent& operator=(LegacyOnHurtActorTriggerItemComponent const&);
    LegacyOnHurtActorTriggerItemComponent(LegacyOnHurtActorTriggerItemComponent const&);
    LegacyOnHurtActorTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyOnHurtActorTriggerItemComponent@@UEAA@XZ
    virtual ~LegacyOnHurtActorTriggerItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LegacyOnHurtActorTriggerItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0LegacyOnHurtActorTriggerItemComponent@@QEAA@$$QEAULegacyOnHurtActorTriggerItemComponentData@@@Z
    MCAPI explicit LegacyOnHurtActorTriggerItemComponent(struct LegacyOnHurtActorTriggerItemComponentData&&);

    // symbol: ?getIdentifier@LegacyOnHurtActorTriggerItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onHurtActor@LegacyOnHurtActorTriggerItemComponent@@AEAAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    MCAPI void _onHurtActor(class ItemStack&, class Actor&, class Mob&);

    // NOLINTEND
};
