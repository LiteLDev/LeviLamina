#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SimpleEventPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SimpleEventPacketInfo;
// clang-format on

class SimpleEventPacket : public ::SerializedPayloadPacket<::SimpleEventPacketInfo, ::SimpleEventPacketPayload> {
public:
    // SimpleEventPacket inner types define
    using PayloadType = ::SimpleEventPacketPayload;

    using PacketInfo = ::SimpleEventPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleEventPacket() /*override*/;
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
