#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/RemoveActorPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct RemoveActorPacketInfo;
// clang-format on

class RemoveActorPacket : public ::SerializedPayloadPacket<::RemoveActorPacketInfo, ::RemoveActorPacketPayload> {
public:
    // RemoveActorPacket inner types define
    using PayloadType = ::RemoveActorPacketPayload;

    using PacketInfo = ::RemoveActorPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemoveActorPacket() /*override*/;
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
