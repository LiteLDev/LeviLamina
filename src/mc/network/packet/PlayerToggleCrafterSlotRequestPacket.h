#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerToggleCrafterSlotRequestPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct PlayerToggleCrafterSlotRequestPacketInfo;
// clang-format on

class PlayerToggleCrafterSlotRequestPacket : public ::SerializedPayloadPacket<
                                                 ::PlayerToggleCrafterSlotRequestPacketInfo,
                                                 ::PlayerToggleCrafterSlotRequestPacketPayload> {
public:
    // PlayerToggleCrafterSlotRequestPacket inner types define
    using PayloadType = ::PlayerToggleCrafterSlotRequestPacketPayload;

    using PacketInfo = ::PlayerToggleCrafterSlotRequestPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerToggleCrafterSlotRequestPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
