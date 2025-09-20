#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdatePlayerGameTypePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct UpdatePlayerGameTypePacketInfo;
// clang-format on

class UpdatePlayerGameTypePacket
: public ::SerializedPayloadPacket<::UpdatePlayerGameTypePacketInfo, ::UpdatePlayerGameTypePacketPayload> {
public:
    // UpdatePlayerGameTypePacket inner types define
    using PayloadType = ::UpdatePlayerGameTypePacketPayload;

    using PacketInfo = ::UpdatePlayerGameTypePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdatePlayerGameTypePacket() /*override*/;
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
