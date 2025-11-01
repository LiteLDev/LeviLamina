#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mResourceName;
    ::ll::TypedStorage<4, 4, int> mChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackChunkRequestPacketPayload& operator=(ResourcePackChunkRequestPacketPayload const&);
    ResourcePackChunkRequestPacketPayload(ResourcePackChunkRequestPacketPayload const&);
    ResourcePackChunkRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ResourcePackChunkRequestPacketPayload& operator=(::ResourcePackChunkRequestPacketPayload&&);

    MCAPI ~ResourcePackChunkRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
