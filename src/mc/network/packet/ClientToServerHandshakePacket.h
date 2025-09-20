#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientToServerHandshakePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ClientToServerHandshakePacketInfo;
// clang-format on

class ClientToServerHandshakePacket
: public ::SerializedPayloadPacket<::ClientToServerHandshakePacketInfo, ::ClientToServerHandshakePacketPayload> {
public:
    // ClientToServerHandshakePacket inner types define
    using PayloadType = ::ClientToServerHandshakePacketPayload;

    using PacketInfo = ::ClientToServerHandshakePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientToServerHandshakePacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
