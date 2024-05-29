#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct RepairableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RepairableItemComponent {
public:
    // prevent constructor by default
    RepairableItemComponent(RepairableItemComponent const&);
    RepairableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RepairableItemComponent@@UEAA@XZ
    virtual ~RepairableItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VRepairableItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VRepairableItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0RepairableItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit RepairableItemComponent(struct Puv::v1_20_50::RepairableItemComponent);

    // symbol: ?handleItemRepair@RepairableItemComponent@@QEBA?AURepairItemResult@@AEAVItemStack@@0_N@Z
    MCAPI struct RepairItemResult handleItemRepair(class ItemStack&, class ItemStack& materialItem, bool) const;

    // symbol: ?isValidRepairItem@RepairableItemComponent@@QEBA_NAEBVItemStackBase@@@Z
    MCAPI bool isValidRepairItem(class ItemStackBase const& repairItem) const;

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

    // symbol: ?registerVersionUpgrades@RepairableItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getRepairItemEntry@RepairableItemComponent@@AEBAPEBURepairItemEntry@@AEBVItemStackBase@@@Z
    MCAPI struct RepairItemEntry const* _getRepairItemEntry(class ItemStackBase const& item) const;

    // symbol: ?_repairItem@RepairableItemComponent@@AEBAHAEAVItemStackBase@@0VExpressionNode@@@Z
    MCAPI int _repairItem(
        class ItemStackBase& materialItem,
        class ItemStackBase& resultItem,
        class ExpressionNode repairAmountExpression
    ) const;

    // NOLINTEND
};
