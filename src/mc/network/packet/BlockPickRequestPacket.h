#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/BlockPickRequestPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct BlockPickRequestPacketInfo;
// clang-format on

class BlockPickRequestPacket
: public ::SerializedPayloadPacket<::BlockPickRequestPacketInfo, ::BlockPickRequestPacketPayload> {
public:
    // BlockPickRequestPacket inner types define
    using PayloadType = ::BlockPickRequestPacketPayload;

    using PacketInfo = ::BlockPickRequestPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPickRequestPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
