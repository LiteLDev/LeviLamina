#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTimePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetTimePacketInfo;
// clang-format on

class SetTimePacket : public ::SerializedPayloadPacket<::SetTimePacketInfo, ::SetTimePacketPayload> {
public:
    // SetTimePacket inner types define
    using PayloadType = ::SetTimePacketPayload;

    using PacketInfo = ::SetTimePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetTimePacket() /*override*/;
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
