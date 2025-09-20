#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdateClientInputLocksPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct UpdateClientInputLocksPacketInfo;
// clang-format on

class UpdateClientInputLocksPacket
: public ::SerializedPayloadPacket<::UpdateClientInputLocksPacketInfo, ::UpdateClientInputLocksPacketPayload> {
public:
    // UpdateClientInputLocksPacket inner types define
    using PayloadType = ::UpdateClientInputLocksPacketPayload;

    using PacketInfo = ::UpdateClientInputLocksPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateClientInputLocksPacket() /*override*/;
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
