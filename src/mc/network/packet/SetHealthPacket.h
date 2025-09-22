#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetHealthPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetHealthPacketInfo;
// clang-format on

class SetHealthPacket : public ::SerializedPayloadPacket<::SetHealthPacketInfo, ::SetHealthPacketPayload> {
public:
    // SetHealthPacket inner types define
    using PayloadType = ::SetHealthPacketPayload;

    using PacketInfo = ::SetHealthPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetHealthPacket() /*override*/;
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
