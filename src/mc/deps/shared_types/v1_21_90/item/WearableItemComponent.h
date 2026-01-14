#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct WearableItemComponent {
public:
    // WearableItemComponent inner types define
    using Slot = ::SharedTypes::Legacy::EquipmentSlot;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mSlot;
    ::ll::TypedStorage<4, 4, int>                                  mProtection;
    ::ll::TypedStorage<1, 1, bool>                                 mHidesPlayerLocation;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
