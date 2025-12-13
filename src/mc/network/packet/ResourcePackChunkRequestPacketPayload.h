#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mResourceName;
    ::ll::TypedStorage<4, 4, int>            mChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackChunkRequestPacketPayload& operator=(ResourcePackChunkRequestPacketPayload const&);
    ResourcePackChunkRequestPacketPayload(ResourcePackChunkRequestPacketPayload const&);
    ResourcePackChunkRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ResourcePackChunkRequestPacketPayload& operator=(::ResourcePackChunkRequestPacketPayload&&);

    MCNAPI ~ResourcePackChunkRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
