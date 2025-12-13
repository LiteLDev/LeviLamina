#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class DisconnectPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6178a2;
    ::ll::UntypedStorage<8, 32> mUnkcbf35f;
    ::ll::UntypedStorage<8, 40> mUnke9e813;
    ::ll::UntypedStorage<4, 4>  mUnk2cce66;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectPacket& operator=(DisconnectPacket const&);
    DisconnectPacket(DisconnectPacket const&);
    DisconnectPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~DisconnectPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisconnectPacket(
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               message,
        ::std::optional<::std::string>     filteredMessage,
        bool                               skipMessage
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Connection::DisconnectFailReason reason,
        ::std::string const&               message,
        ::std::optional<::std::string>     filteredMessage,
        bool                               skipMessage
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
    MCFOLD ::MinecraftPacketIds $getId() const;

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
