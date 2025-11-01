#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

struct BlockActorDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActorDataPacketPayload& operator=(BlockActorDataPacketPayload const&);
    BlockActorDataPacketPayload(BlockActorDataPacketPayload const&);
    BlockActorDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActorDataPacketPayload(::BlockPos const& pos, ::CompoundTag tag);

    MCAPI ::BlockActorDataPacketPayload& operator=(::BlockActorDataPacketPayload&&);

    MCAPI ~BlockActorDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, ::CompoundTag tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
