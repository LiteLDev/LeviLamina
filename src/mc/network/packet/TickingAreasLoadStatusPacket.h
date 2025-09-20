#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TickingAreasLoadStatusPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct TickingAreasLoadStatusPacketInfo;
// clang-format on

class TickingAreasLoadStatusPacket
: public ::SerializedPayloadPacket<::TickingAreasLoadStatusPacketInfo, ::TickingAreasLoadStatusPacketPayload> {
public:
    // TickingAreasLoadStatusPacket inner types define
    using PayloadType = ::TickingAreasLoadStatusPacketPayload;

    using PacketInfo = ::TickingAreasLoadStatusPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickingAreasLoadStatusPacket() /*override*/;
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
