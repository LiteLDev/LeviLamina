#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetPlayerGameTypePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetPlayerGameTypePacketInfo;
// clang-format on

class SetPlayerGameTypePacket
: public ::SerializedPayloadPacket<::SetPlayerGameTypePacketInfo, ::SetPlayerGameTypePacketPayload> {
public:
    // SetPlayerGameTypePacket inner types define
    using PayloadType = ::SetPlayerGameTypePacketPayload;

    using PacketInfo = ::SetPlayerGameTypePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetPlayerGameTypePacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
