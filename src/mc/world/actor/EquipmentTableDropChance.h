#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SlotWithDropChance.h"

struct EquipmentTableDropChance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4abcc2;
    ::ll::UntypedStorage<4, 4> mUnk649c25;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentTableDropChance& operator=(EquipmentTableDropChance const&);
    EquipmentTableDropChance(EquipmentTableDropChance const&);
    EquipmentTableDropChance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EquipmentTableDropChance(::SlotWithDropChance slot, float dropChance);

    MCAPI void setSlotFromEquipmentSlotName(::std::string const& equipmentSlotName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SlotWithDropChance slot, float dropChance);
    // NOLINTEND
};
