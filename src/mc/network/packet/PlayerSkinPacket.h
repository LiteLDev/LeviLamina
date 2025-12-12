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

class PlayerSkinPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd75fff;
    ::ll::UntypedStorage<8, 16> mUnkf7718a;
    ::ll::UntypedStorage<8, 32> mUnk51128d;
    ::ll::UntypedStorage<8, 32> mUnk7011a8;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSkinPacket& operator=(PlayerSkinPacket const&);
    PlayerSkinPacket(PlayerSkinPacket const&);
    PlayerSkinPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSkinPacket() /*override*/;

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

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCFOLD ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
