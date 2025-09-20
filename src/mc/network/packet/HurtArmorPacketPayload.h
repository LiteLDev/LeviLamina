#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

struct HurtArmorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, int>                                     mDmg;
    ::ll::TypedStorage<4, 4, ::std::bitset<5>>                        mArmorSlots;
    // NOLINTEND
};
