#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/EquipmentTableDropChance.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct SlotDropChancesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::std::array<::EquipmentTableDropChance, 6>> mDropChances;
    ::ll::TypedStorage<4, 4, float>                                        mDefaultChance;
    ::ll::TypedStorage<4, 4, float>                                        mDefaultChanceForInvalidSlots;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND
};
