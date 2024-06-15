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
    // symbol: ??0EquipmentTableDropChance@@QEAA@W4SlotWithDropChance@@M@Z
    MCAPI EquipmentTableDropChance(::SlotWithDropChance, float);

    // symbol:
    // ?setSlotFromEquipmentSlotName@EquipmentTableDropChance@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setSlotFromEquipmentSlotName(std::string const&);

    // NOLINTEND
};
