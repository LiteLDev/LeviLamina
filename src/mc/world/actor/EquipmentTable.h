#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct EquipmentTableDropChance;
// clang-format on

struct EquipmentTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             mLootTableFilePath;
    ::ll::TypedStorage<8, 24, ::std::vector<::EquipmentTableDropChance>> mDropChancesPerSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentTable& operator=(EquipmentTable const&);
    EquipmentTable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EquipmentTable(::EquipmentTable const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::EquipmentTable& operator=(::EquipmentTable&&);

    MCNAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EquipmentTable const&);
    // NOLINTEND
};
