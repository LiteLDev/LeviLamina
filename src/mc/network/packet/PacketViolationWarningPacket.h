#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PacketViolationWarningPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct PacketViolationWarningPacketInfo;
// clang-format on

class PacketViolationWarningPacket
: public ::SerializedPayloadPacket<::PacketViolationWarningPacketInfo, ::PacketViolationWarningPacketPayload> {
public:
    // PacketViolationWarningPacket inner types define
    using PayloadType = ::PacketViolationWarningPacketPayload;

    using PacketInfo = ::PacketViolationWarningPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketViolationWarningPacket() /*override*/;
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
