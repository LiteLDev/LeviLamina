#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct OnEquipmentChangedSlotEntryDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mSlot;
    ::ll::TypedStorage<8, 32, ::std::string>                       mOnEquip;
    ::ll::TypedStorage<8, 32, ::std::string>                       mOnUnequip;
    // NOLINTEND

public:
    // prevent constructor by default
    OnEquipmentChangedSlotEntryDescriptor& operator=(OnEquipmentChangedSlotEntryDescriptor const&);
    OnEquipmentChangedSlotEntryDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OnEquipmentChangedSlotEntryDescriptor(::SharedTypes::v1_26_20::OnEquipmentChangedSlotEntryDescriptor const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::OnEquipmentChangedSlotEntryDescriptor const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
