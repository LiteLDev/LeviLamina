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
    MCAPI explicit EquipmentTable(class CompoundTag const& tag);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool operator==(struct EquipmentTable const& other) const;

    MCAPI void readAdditionalSaveData(class CompoundTag const& tag);

    MCAPI ~EquipmentTable();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<struct EquipmentTableDropChance> _createDropChancesFromTag(class Tag const& tag);

    MCAPI static std::unique_ptr<class CompoundTag>
    _createTagFromDropChances(std::vector<struct EquipmentTableDropChance> const& dropChances);

    // NOLINTEND
};
