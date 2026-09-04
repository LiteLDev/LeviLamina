#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityArmorEquipmentSlotMappingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfe1b80;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityArmorEquipmentSlotMappingDefinition& operator=(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _setArmorSlot(::std::string const& slot);
    // NOLINTEND
};
