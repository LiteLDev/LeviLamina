#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TakeItemActorPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct TakeItemActorPacketInfo;
// clang-format on

class TakeItemActorPacket : public ::SerializedPayloadPacket<::TakeItemActorPacketInfo, ::TakeItemActorPacketPayload> {
public:
    // TakeItemActorPacket inner types define
    using PayloadType = ::TakeItemActorPacketPayload;

    using PacketInfo = ::TakeItemActorPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TakeItemActorPacket() /*override*/;
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
