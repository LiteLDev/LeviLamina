#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/nbt/CompoundTag.h"

struct LevelEventGenericPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mEventId;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelEventGenericPacketPayload& operator=(LevelEventGenericPacketPayload const&);
    LevelEventGenericPacketPayload(LevelEventGenericPacketPayload const&);
    LevelEventGenericPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelEventGenericPacketPayload(::SharedTypes::Legacy::LevelEvent eventId, ::CompoundTag const& data);

    MCAPI ::LevelEventGenericPacketPayload& operator=(::LevelEventGenericPacketPayload&&);

    MCAPI ~LevelEventGenericPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::LevelEvent eventId, ::CompoundTag const& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
