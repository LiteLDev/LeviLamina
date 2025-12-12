#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka4431f;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerArmorDamagePacketPayload& operator=(PlayerArmorDamagePacketPayload const&);
    PlayerArmorDamagePacketPayload(PlayerArmorDamagePacketPayload const&);
    PlayerArmorDamagePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PlayerArmorDamagePacketPayload& operator=(::PlayerArmorDamagePacketPayload&&);
    // NOLINTEND
};
