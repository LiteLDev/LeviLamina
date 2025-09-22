#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetLocalPlayerAsInitializedPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetLocalPlayerAsInitializedPacketInfo;
// clang-format on

class SetLocalPlayerAsInitializedPacket
: public ::
      SerializedPayloadPacket<::SetLocalPlayerAsInitializedPacketInfo, ::SetLocalPlayerAsInitializedPacketPayload> {
public:
    // SetLocalPlayerAsInitializedPacket inner types define
    using PayloadType = ::SetLocalPlayerAsInitializedPacketPayload;

    using PacketInfo = ::SetLocalPlayerAsInitializedPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetLocalPlayerAsInitializedPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
