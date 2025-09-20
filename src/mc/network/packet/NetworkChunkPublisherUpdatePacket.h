#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/NetworkChunkPublisherUpdatePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct NetworkChunkPublisherUpdatePacketInfo;
// clang-format on

class NetworkChunkPublisherUpdatePacket
: public ::
      SerializedPayloadPacket<::NetworkChunkPublisherUpdatePacketInfo, ::NetworkChunkPublisherUpdatePacketPayload> {
public:
    // NetworkChunkPublisherUpdatePacket inner types define
    using PayloadType = ::NetworkChunkPublisherUpdatePacketPayload;

    using PacketInfo = ::NetworkChunkPublisherUpdatePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkChunkPublisherUpdatePacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
