#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EquipmentTable {
public:
    // prevent constructor by default
    EquipmentTable& operator=(EquipmentTable const&);
    EquipmentTable(EquipmentTable const&);
    EquipmentTable();

public:
    // NOLINTBEGIN
    // symbol: ??0EquipmentTable@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit EquipmentTable(class CompoundTag const&);

    // symbol: ?addAdditionalSaveData@EquipmentTable@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    // symbol: ??8EquipmentTable@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct EquipmentTable const&) const;

    // symbol: ?readAdditionalSaveData@EquipmentTable@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class CompoundTag const&);

    // symbol: ??1EquipmentTable@@QEAA@XZ
    MCAPI ~EquipmentTable();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createDropChancesFromTag@EquipmentTable@@CA?AV?$vector@UEquipmentTableDropChance@@V?$allocator@UEquipmentTableDropChance@@@std@@@std@@AEBVTag@@@Z
    MCAPI static std::vector<struct EquipmentTableDropChance> _createDropChancesFromTag(class Tag const&);

    // symbol:
    // ?_createTagFromDropChances@EquipmentTable@@CA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV?$vector@UEquipmentTableDropChance@@V?$allocator@UEquipmentTableDropChance@@@std@@@3@@Z
    MCAPI static std::unique_ptr<class CompoundTag>
    _createTagFromDropChances(std::vector<struct EquipmentTableDropChance> const&);

    // NOLINTEND
};
