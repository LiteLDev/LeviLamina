#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientCacheStatusPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ClientCacheStatusPacketInfo;
// clang-format on

class ClientCacheStatusPacket
: public ::SerializedPayloadPacket<::ClientCacheStatusPacketInfo, ::ClientCacheStatusPacketPayload> {
public:
    // ClientCacheStatusPacket inner types define
    using PayloadType = ::ClientCacheStatusPacketPayload;

    using PacketInfo = ::ClientCacheStatusPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientCacheStatusPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
