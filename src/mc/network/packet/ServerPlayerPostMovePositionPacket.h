#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerPlayerPostMovePositionPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ServerPlayerPostMovePositionPacketInfo;
// clang-format on

class ServerPlayerPostMovePositionPacket
: public ::
      SerializedPayloadPacket<::ServerPlayerPostMovePositionPacketInfo, ::ServerPlayerPostMovePositionPacketPayload> {
public:
    // ServerPlayerPostMovePositionPacket inner types define
    using PayloadType = ::ServerPlayerPostMovePositionPacketPayload;

    using PacketInfo = ::ServerPlayerPostMovePositionPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerPostMovePositionPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
