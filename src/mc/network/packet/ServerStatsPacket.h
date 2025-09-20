#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerStatsPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ServerStatsPacketInfo;
// clang-format on

class ServerStatsPacket : public ::SerializedPayloadPacket<::ServerStatsPacketInfo, ::ServerStatsPacketPayload> {
public:
    // ServerStatsPacket inner types define
    using PayloadType = ::ServerStatsPacketPayload;

    using PacketInfo = ::ServerStatsPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerStatsPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
