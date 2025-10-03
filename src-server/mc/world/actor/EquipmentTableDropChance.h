#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EquipmentTableDropChance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf20942;
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
    MCNAPI void setSlotFromEquipmentSlotName(::std::string const& equipmentSlotName);
    // NOLINTEND
};
