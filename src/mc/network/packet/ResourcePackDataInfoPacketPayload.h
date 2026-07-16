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
    ResourcePackDataInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackDataInfoPacketPayload(
        ::std::string const& name,
        uint                 chunkSize,
        int                  nbChunk,
        uint64               fileSize,
        ::std::string const& fileHash,
        bool                 isPremium,
        ::PackType           packType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const& name,
        uint                 chunkSize,
        int                  nbChunk,
        uint64               fileSize,
        ::std::string const& fileHash,
        bool                 isPremium,
        ::PackType           packType
    );
    // NOLINTEND
};
