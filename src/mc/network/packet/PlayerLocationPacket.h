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

class PlayerLocationPacket : public ::Packet {
public:
    // PlayerLocationPacket inner types define
    enum class Type : int {
        Coordinates = 0,
        Hide        = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfb9e8f;
    ::ll::UntypedStorage<8, 8>  mUnk1d4797;
    ::ll::UntypedStorage<4, 12> mUnk7fe5be;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLocationPacket& operator=(PlayerLocationPacket const&);
    PlayerLocationPacket(PlayerLocationPacket const&);
    PlayerLocationPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~PlayerLocationPacket() /*override*/;
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
