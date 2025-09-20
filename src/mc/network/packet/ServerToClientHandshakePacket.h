#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerToClientHandshakePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ServerToClientHandshakePacketInfo;
// clang-format on

class ServerToClientHandshakePacket
: public ::SerializedPayloadPacket<::ServerToClientHandshakePacketInfo, ::ServerToClientHandshakePacketPayload> {
public:
    // ServerToClientHandshakePacket inner types define
    using PayloadType = ::ServerToClientHandshakePacketPayload;

    using PacketInfo = ::ServerToClientHandshakePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerToClientHandshakePacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
