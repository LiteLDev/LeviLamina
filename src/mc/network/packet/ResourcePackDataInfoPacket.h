#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ResourcePackDataInfoPacket : public ::Packet {
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
    ResourcePackDataInfoPacket& operator=(ResourcePackDataInfoPacket const&);
    ResourcePackDataInfoPacket(ResourcePackDataInfoPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ResourcePackDataInfoPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackDataInfoPacket();

    MCAPI ResourcePackDataInfoPacket(
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
    MCAPI void* $ctor();

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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
