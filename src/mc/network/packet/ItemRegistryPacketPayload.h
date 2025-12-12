#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemRegistryPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7ab577;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryPacketPayload& operator=(ItemRegistryPacketPayload const&);
    ItemRegistryPacketPayload(ItemRegistryPacketPayload const&);
    ItemRegistryPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemRegistryPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
