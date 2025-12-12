#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72f9ab;
    ::ll::UntypedStorage<2, 2>  mUnk199246;
    ::ll::UntypedStorage<1, 1>  mUnk328cdb;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferPacketPayload& operator=(TransferPacketPayload const&);
    TransferPacketPayload(TransferPacketPayload const&);
    TransferPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TransferPacketPayload& operator=(::TransferPacketPayload&&);

    MCNAPI ~TransferPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
