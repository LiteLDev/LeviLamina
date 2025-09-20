#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ShowCreditsPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ShowCreditsPacketInfo;
// clang-format on

class ShowCreditsPacket : public ::SerializedPayloadPacket<::ShowCreditsPacketInfo, ::ShowCreditsPacketPayload> {
public:
    // ShowCreditsPacket inner types define
    using PayloadType = ::ShowCreditsPacketPayload;

    using PacketInfo = ::ShowCreditsPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShowCreditsPacket() /*override*/;
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
