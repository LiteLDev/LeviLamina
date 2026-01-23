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

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);

    MCAPI ~EquipmentTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::EquipmentTableDropChance> _createDropChancesFromTag(::Tag const& tag);

    MCAPI static ::std::unique_ptr<::CompoundTag>
    _createTagFromDropChances(::std::vector<::EquipmentTableDropChance> const& dropChances);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EquipmentTable const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
