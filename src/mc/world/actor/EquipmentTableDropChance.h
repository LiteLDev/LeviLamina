#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SlotWithDropChance.h"

struct EquipmentTableDropChance {
public:
    // prevent constructor by default
    EquipmentTableDropChance& operator=(EquipmentTableDropChance const&);
    EquipmentTableDropChance(EquipmentTableDropChance const&);
    EquipmentTableDropChance();

public:
    // NOLINTBEGIN
    MCAPI EquipmentTableDropChance(::SlotWithDropChance slot, float dropChance);

    MCAPI void setSlotFromEquipmentSlotName(std::string const& equipmentSlotName);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
