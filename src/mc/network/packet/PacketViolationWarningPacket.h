#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/PacketViolationSeverity.h"
#include "mc/network/packet/PacketViolationType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class PacketViolationWarningPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PacketViolationType>     mViolationType;
    ::ll::TypedStorage<4, 4, ::PacketViolationSeverity> mViolationSeverity;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>      mViolatingPacketId;
    ::ll::TypedStorage<8, 32, ::std::string>            mViolationContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~PacketViolationWarningPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketViolationWarningPacket();

    MCAPI PacketViolationWarningPacket(
        ::std::error_code const&  error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::std::error_code const&  error_code,
        ::PacketViolationResponse violationResponse,
        ::MinecraftPacketIds      violatingPacketId,
        ::std::string const&      violationContext
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

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::std::string $getName() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
