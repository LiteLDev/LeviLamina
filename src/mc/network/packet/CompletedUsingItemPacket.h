#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CompletedUsingItemPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CompletedUsingItemPacketInfo;
// clang-format on

class CompletedUsingItemPacket
: public ::SerializedPayloadPacket<::CompletedUsingItemPacketInfo, ::CompletedUsingItemPacketPayload> {
public:
    // CompletedUsingItemPacket inner types define
    using PayloadType = ::CompletedUsingItemPacketPayload;

    using PacketInfo = ::CompletedUsingItemPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompletedUsingItemPacket() /*override*/;
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
