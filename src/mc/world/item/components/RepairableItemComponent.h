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
    // vIndex: 0, symbol: __gen_??1RepairableItemComponent@@UEAA@XZ
    virtual ~RepairableItemComponent() = default;

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
