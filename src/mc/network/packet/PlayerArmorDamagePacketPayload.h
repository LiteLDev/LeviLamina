#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
struct ArmorSlotAndDamagePair;
// clang-format on

struct PlayerArmorDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ArmorSlotAndDamagePair>> mSlotAndDamagePairs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addArmorDamage(::SharedTypes::Legacy::ArmorSlot armorSlot, short damage);
    // NOLINTEND
};
