#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ActorPickRequestPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ActorPickRequestPacketInfo;
// clang-format on

class ActorPickRequestPacket
: public ::SerializedPayloadPacket<::ActorPickRequestPacketInfo, ::ActorPickRequestPacketPayload> {
public:
    // ActorPickRequestPacket inner types define
    using PayloadType = ::ActorPickRequestPacketPayload;

    using PacketInfo = ::ActorPickRequestPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorPickRequestPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
