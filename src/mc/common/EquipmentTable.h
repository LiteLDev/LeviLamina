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
    MCAPI explicit EquipmentTable(class CompoundTag const&);

    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    MCAPI bool operator==(struct EquipmentTable const&) const;

    MCAPI void readAdditionalSaveData(class CompoundTag const&);

    MCAPI ~EquipmentTable();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<struct EquipmentTableDropChance> _createDropChancesFromTag(class Tag const&);

    MCAPI static std::unique_ptr<class CompoundTag>
    _createTagFromDropChances(std::vector<struct EquipmentTableDropChance> const&);

    // NOLINTEND
};
