#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"

struct EquipmentTableDropChance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::SlotWithDropChance> mSlot;
    ::ll::TypedStorage<4, 4, float>                                     mDropChance;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentTableDropChance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EquipmentTableDropChance(::SharedTypes::Legacy::SlotWithDropChance slot, float dropChance);

    MCAPI void setSlotFromEquipmentSlotName(::std::string const& equipmentSlotName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::SlotWithDropChance slot, float dropChance);
    // NOLINTEND
};
