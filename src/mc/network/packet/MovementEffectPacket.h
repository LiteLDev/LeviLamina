#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MovementEffectPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct MovementEffectPacketInfo;
// clang-format on

class MovementEffectPacket
: public ::SerializedPayloadPacket<::MovementEffectPacketInfo, ::MovementEffectPacketPayload> {
public:
    // MovementEffectPacket inner types define
    using PayloadType = ::MovementEffectPacketPayload;

    using PacketInfo = ::MovementEffectPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MovementEffectPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
