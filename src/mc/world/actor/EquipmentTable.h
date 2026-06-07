#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
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
    MCAPI EquipmentTable(::EquipmentTable const&);

    MCAPI explicit EquipmentTable(::std::string lootTable);

    MCAPI explicit EquipmentTable(::CompoundTag const& tag);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD ::EquipmentTable& operator=(::EquipmentTable&&);

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::EquipmentTableDropChance> _createDropChancesFromTag(::Tag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::EquipmentTable const&);

    MCAPI void* $ctor(::std::string lootTable);

    MCAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND
};
