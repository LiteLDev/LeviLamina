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

class SubClientLoginPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk819d67;
    // NOLINTEND

public:
    // prevent constructor by default
    SubClientLoginPacket& operator=(SubClientLoginPacket const&);
    SubClientLoginPacket(SubClientLoginPacket const&);
    SubClientLoginPacket();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SubClientLoginPacket() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~SubClientLoginPacket() /*override*/;
#endif

    virtual ::std::string getName() const /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual bool disallowBatching() const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
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

    MCFOLD bool $disallowBatching() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
