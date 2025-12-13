#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ClientCacheBlobStatusPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk72ef37;
    ::ll::UntypedStorage<8, 24> mUnke1d3dc;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientCacheBlobStatusPacket& operator=(ClientCacheBlobStatusPacket const&);
    ClientCacheBlobStatusPacket(ClientCacheBlobStatusPacket const&);
    ClientCacheBlobStatusPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getName() const /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

#ifdef LL_PLAT_S
    virtual ~ClientCacheBlobStatusPacket() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ClientCacheBlobStatusPacket() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
