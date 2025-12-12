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

class PlayerListPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd3b428;
    ::ll::UntypedStorage<1, 1>  mUnkd157ad;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListPacket& operator=(PlayerListPacket const&);
    PlayerListPacket(PlayerListPacket const&);
    PlayerListPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerListPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream) /*override*/;

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
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCFOLD ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
