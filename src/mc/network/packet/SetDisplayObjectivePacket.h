#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetDisplayObjectivePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetDisplayObjectivePacketInfo;
// clang-format on

class SetDisplayObjectivePacket
: public ::SerializedPayloadPacket<::SetDisplayObjectivePacketInfo, ::SetDisplayObjectivePacketPayload> {
public:
    // SetDisplayObjectivePacket inner types define
    using PayloadType = ::SetDisplayObjectivePacketPayload;

    using PacketInfo = ::SetDisplayObjectivePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDisplayObjectivePacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
