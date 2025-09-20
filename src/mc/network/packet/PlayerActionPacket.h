#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerActionPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct PlayerActionPacketInfo;
// clang-format on

class PlayerActionPacket : public ::SerializedPayloadPacket<::PlayerActionPacketInfo, ::PlayerActionPacketPayload> {
public:
    // PlayerActionPacket inner types define
    using PayloadType = ::PlayerActionPacketPayload;

    using PacketInfo = ::PlayerActionPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerActionPacket() /*override*/;
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
