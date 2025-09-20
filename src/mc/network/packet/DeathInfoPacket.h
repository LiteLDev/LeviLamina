#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/DeathInfoPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct DeathInfoPacketInfo;
// clang-format on

class DeathInfoPacket : public ::SerializedPayloadPacket<::DeathInfoPacketInfo, ::DeathInfoPacketPayload> {
public:
    // DeathInfoPacket inner types define
    using PayloadType = ::DeathInfoPacketPayload;

    using PacketInfo = ::DeathInfoPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeathInfoPacket() /*override*/;
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
