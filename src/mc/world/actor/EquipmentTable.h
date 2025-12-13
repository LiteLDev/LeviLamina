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
    ::ll::UntypedStorage<8, 32> mUnkd17193;
    ::ll::UntypedStorage<8, 24> mUnk5f0555;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentTable& operator=(EquipmentTable const&);
    EquipmentTable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EquipmentTable(::EquipmentTable const&);

    MCNAPI void readAdditionalSaveData(::CompoundTag const& tag);

    MCNAPI ~EquipmentTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::EquipmentTableDropChance> _createDropChancesFromTag(::Tag const& tag);

    MCNAPI static ::std::unique_ptr<::CompoundTag>
    _createTagFromDropChances(::std::vector<::EquipmentTableDropChance> const& dropChances);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EquipmentTable const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
