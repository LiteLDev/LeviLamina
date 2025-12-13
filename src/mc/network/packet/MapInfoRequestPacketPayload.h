#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MapInfoRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc0e196;
    ::ll::UntypedStorage<8, 24> mUnk807366;
    // NOLINTEND

public:
    // prevent constructor by default
    MapInfoRequestPacketPayload& operator=(MapInfoRequestPacketPayload const&);
    MapInfoRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapInfoRequestPacketPayload(::MapInfoRequestPacketPayload const&);

    MCNAPI ::MapInfoRequestPacketPayload& operator=(::MapInfoRequestPacketPayload&&);

    MCNAPI ~MapInfoRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MapInfoRequestPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
