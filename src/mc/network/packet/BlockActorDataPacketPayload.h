#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
// clang-format on

struct BlockActorDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkbc9524;
    ::ll::UntypedStorage<8, 24> mUnk31cea8;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActorDataPacketPayload& operator=(BlockActorDataPacketPayload const&);
    BlockActorDataPacketPayload(BlockActorDataPacketPayload const&);
    BlockActorDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockActorDataPacketPayload(::BlockPos const& pos, ::CompoundTag tag);

    MCNAPI ::BlockActorDataPacketPayload& operator=(::BlockActorDataPacketPayload&&);

    MCNAPI ~BlockActorDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos, ::CompoundTag tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
