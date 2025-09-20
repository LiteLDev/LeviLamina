#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ActorEventPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ActorEventPacketInfo;
// clang-format on

class ActorEventPacket : public ::SerializedPayloadPacket<::ActorEventPacketInfo, ::ActorEventPacketPayload> {
public:
    // ActorEventPacket inner types define
    using PayloadType = ::ActorEventPacketPayload;

    using PacketInfo = ::ActorEventPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventPacket() /*override*/;
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
