#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // prevent constructor by default
    PlayerArmorDamagePacketPayload& operator=(PlayerArmorDamagePacketPayload const&);
    PlayerArmorDamagePacketPayload(PlayerArmorDamagePacketPayload const&);
    PlayerArmorDamagePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PlayerArmorDamagePacketPayload& operator=(::PlayerArmorDamagePacketPayload&&);
    // NOLINTEND

};
