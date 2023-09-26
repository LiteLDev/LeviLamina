#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ChargeableItemComponent : public ::ItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?isNetworkComponent@ChargeableItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@ChargeableItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@ChargeableItemComponent@@UEAA_NAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx&);

    // symbol: ??1ChargeableItemComponent@@UEAA@XZ
    MCVAPI ~ChargeableItemComponent();

    // symbol: ??0ChargeableItemComponent@@QEAA@XZ
    MCAPI ChargeableItemComponent();

    // symbol: ??0ChargeableItemComponent@@QEAA@AEBV0@@Z
    MCAPI ChargeableItemComponent(class ChargeableItemComponent const&);

    // symbol: ?getMovementModifier@ChargeableItemComponent@@QEBAMXZ
    MCAPI float getMovementModifier() const;

    // symbol: ??4ChargeableItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ChargeableItemComponent& operator=(class ChargeableItemComponent const&);

    // symbol: ??4ChargeableItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ChargeableItemComponent& operator=(class ChargeableItemComponent&&);

    // symbol: ?use@ChargeableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool use(class ItemStack&, class Player&) const;

    // symbol: ?useTimeDepleted@ChargeableItemComponent@@QEBAXAEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z
    MCAPI void useTimeDepleted(class ItemStack&, class Player&, class Level&) const;

    // symbol:
    // ?bindType@ChargeableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@ChargeableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
