#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerFogPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct PlayerFogPacketInfo;
// clang-format on

class PlayerFogPacket : public ::SerializedPayloadPacket<::PlayerFogPacketInfo, ::PlayerFogPacketPayload> {
public:
    // PlayerFogPacket inner types define
    using PayloadType = ::PlayerFogPacketPayload;

    using PacketInfo = ::PlayerFogPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerFogPacket() /*override*/;
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
