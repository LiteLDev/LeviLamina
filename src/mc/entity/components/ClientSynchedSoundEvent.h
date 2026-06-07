#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LevelSoundEventPacketPayload.h"

struct ClientSynchedSoundEvent : public ::LevelSoundEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTickDelay;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ClientSynchedSoundEvent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ClientSynchedSoundEvent(::LevelSoundEventPacketPayload const& payload);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::LevelSoundEventPacketPayload const& payload);
#endif
    // NOLINTEND
};
