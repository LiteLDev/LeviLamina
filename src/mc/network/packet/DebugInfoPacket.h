#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/DebugInfoPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct DebugInfoPacketInfo;
// clang-format on

class DebugInfoPacket : public ::SerializedPayloadPacket<::DebugInfoPacketInfo, ::DebugInfoPacketPayload> {
public:
    // DebugInfoPacket inner types define
    using PayloadType = ::DebugInfoPacketPayload;

    using PacketInfo = ::DebugInfoPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DebugInfoPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
