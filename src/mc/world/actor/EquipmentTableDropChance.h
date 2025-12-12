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
    // member functions
    // NOLINTBEGIN
    MCAPI void setSlotFromEquipmentSlotName(::std::string const& equipmentSlotName);
    // NOLINTEND
};
