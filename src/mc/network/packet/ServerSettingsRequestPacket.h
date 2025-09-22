#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerSettingsRequestPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ServerSettingsRequestPacketInfo;
// clang-format on

class ServerSettingsRequestPacket
: public ::SerializedPayloadPacket<::ServerSettingsRequestPacketInfo, ::ServerSettingsRequestPacketPayload> {
public:
    // ServerSettingsRequestPacket inner types define
    using PayloadType = ::ServerSettingsRequestPacketPayload;

    using PacketInfo = ::ServerSettingsRequestPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerSettingsRequestPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
