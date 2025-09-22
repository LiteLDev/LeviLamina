#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientboundCloseFormPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ClientboundCloseFormPacketInfo;
// clang-format on

class ClientboundCloseFormPacket
: public ::SerializedPayloadPacket<::ClientboundCloseFormPacketInfo, ::ClientboundCloseFormPacketPayload> {
public:
    // ClientboundCloseFormPacket inner types define
    using PayloadType = ::ClientboundCloseFormPacketPayload;

    using PacketInfo = ::ClientboundCloseFormPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientboundCloseFormPacket() /*override*/;
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
