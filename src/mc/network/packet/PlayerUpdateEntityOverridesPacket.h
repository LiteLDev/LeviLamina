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

class PlayerUpdateEntityOverridesPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk9a7504;
    ::ll::UntypedStorage<1, 1> mUnkc31c3f;
    ::ll::UntypedStorage<8, 8> mUnkc11da2;
    ::ll::UntypedStorage<4, 4> mUnk50cb23;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUpdateEntityOverridesPacket& operator=(PlayerUpdateEntityOverridesPacket const&);
    PlayerUpdateEntityOverridesPacket(PlayerUpdateEntityOverridesPacket const&);
    PlayerUpdateEntityOverridesPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual void writeVariant(::BinaryStream& stream) const;

    virtual ~PlayerUpdateEntityOverridesPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);

    MCAPI void $writeVariant(::BinaryStream& stream) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
