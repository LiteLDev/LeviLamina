#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SlotWithDropChance.h"

struct EquipmentTableDropChance {
public:
    // prevent constructor by default
    EquipmentTableDropChance& operator=(EquipmentTableDropChance const&);
    EquipmentTableDropChance(EquipmentTableDropChance const&);
    EquipmentTableDropChance();

public:
    // NOLINTBEGIN
    MCAPI EquipmentTableDropChance(::SlotWithDropChance, float);

    MCAPI void setSlotFromEquipmentSlotName(std::string const&);

    // NOLINTEND
};
