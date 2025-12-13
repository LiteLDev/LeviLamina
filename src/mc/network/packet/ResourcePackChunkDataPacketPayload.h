#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mResourceName;
    ::ll::TypedStorage<4, 4, int>                   mChunkID;
    ::ll::TypedStorage<8, 8, uint64>                mByteOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackChunkDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackChunkDataPacketPayload(::ResourcePackChunkDataPacketPayload const&);

    MCNAPI ::ResourcePackChunkDataPacketPayload& operator=(::ResourcePackChunkDataPacketPayload&&);

    MCNAPI ::ResourcePackChunkDataPacketPayload& operator=(::ResourcePackChunkDataPacketPayload const&);

    MCNAPI ~ResourcePackChunkDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackChunkDataPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
