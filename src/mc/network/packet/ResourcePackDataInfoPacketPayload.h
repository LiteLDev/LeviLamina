#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

struct ResourcePackDataInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mResourceName;
    ::ll::TypedStorage<4, 4, uint>           mChunkSize;
    ::ll::TypedStorage<4, 4, int>            mNbChunks;
    ::ll::TypedStorage<8, 8, uint64>         mFileSize;
    ::ll::TypedStorage<8, 32, ::std::string> mFileHash;
    ::ll::TypedStorage<1, 1, ::PackType>     mPackType;
    ::ll::TypedStorage<1, 1, bool>           mIsPremium;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackDataInfoPacketPayload& operator=(ResourcePackDataInfoPacketPayload const&);
    ResourcePackDataInfoPacketPayload(ResourcePackDataInfoPacketPayload const&);
    ResourcePackDataInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ResourcePackDataInfoPacketPayload& operator=(::ResourcePackDataInfoPacketPayload&&);

    MCAPI ~ResourcePackDataInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
