#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    MCAPI ::LevelEventGenericPacketPayload& operator=(::LevelEventGenericPacketPayload&&);

    MCAPI ~LevelEventGenericPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
