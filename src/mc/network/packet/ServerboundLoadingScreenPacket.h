#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerboundLoadingScreenPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ServerboundLoadingScreenPacketInfo;
// clang-format on

class ServerboundLoadingScreenPacket
: public ::SerializedPayloadPacket<::ServerboundLoadingScreenPacketInfo, ::ServerboundLoadingScreenPacketPayload> {
public:
    // ServerboundLoadingScreenPacket inner types define
    using PayloadType = ::ServerboundLoadingScreenPacketPayload;

    using PacketInfo = ::ServerboundLoadingScreenPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerboundLoadingScreenPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
