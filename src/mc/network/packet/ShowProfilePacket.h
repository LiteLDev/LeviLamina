#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ShowProfilePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ShowProfilePacketInfo;
// clang-format on

class ShowProfilePacket : public ::SerializedPayloadPacket<::ShowProfilePacketInfo, ::ShowProfilePacketPayload> {
public:
    // ShowProfilePacket inner types define
    using PayloadType = ::ShowProfilePacketPayload;

    using PacketInfo = ::ShowProfilePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShowProfilePacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
