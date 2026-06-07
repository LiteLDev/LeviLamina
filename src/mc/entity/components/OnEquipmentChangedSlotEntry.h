#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnEquipmentChangedSlotEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf60ece;
    ::ll::UntypedStorage<8, 32> mUnke0355c;
    ::ll::UntypedStorage<8, 32> mUnkb0d96a;
    // NOLINTEND

public:
    // prevent constructor by default
    OnEquipmentChangedSlotEntry& operator=(OnEquipmentChangedSlotEntry const&);
    OnEquipmentChangedSlotEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OnEquipmentChangedSlotEntry(::OnEquipmentChangedSlotEntry const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::OnEquipmentChangedSlotEntry const&);
    // NOLINTEND
};
