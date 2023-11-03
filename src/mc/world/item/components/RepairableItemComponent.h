#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RepairableItemComponent {
public:
    // prevent constructor by default
    RepairableItemComponent(RepairableItemComponent const&);
    RepairableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@InteractButtonItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@ChargeableItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@ChargeableItemComponent@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ?handleItemRepair@RepairableItemComponent@@QEBA?AURepairItemResult@@AEAVItemStack@@0_N@Z
    MCAPI struct RepairItemResult handleItemRepair(class ItemStack&, class ItemStack&, bool) const;

    // symbol: ??4RepairableItemComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class RepairableItemComponent& operator=(class RepairableItemComponent&&);

    // symbol: ??4RepairableItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class RepairableItemComponent& operator=(class RepairableItemComponent const&);

    // symbol:
    // ?bindType@RepairableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@RepairableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getRepairItemEntry@RepairableItemComponent@@AEBAPEBURepairItemEntry@@AEBVItemStackBase@@@Z
    MCAPI struct RepairItemEntry const* _getRepairItemEntry(class ItemStackBase const&) const;

    // symbol: ?_repairItem@RepairableItemComponent@@AEBAHAEAVItemStackBase@@0VExpressionNode@@@Z
    MCAPI int _repairItem(class ItemStackBase&, class ItemStackBase&, class ExpressionNode) const;

    // NOLINTEND
};
