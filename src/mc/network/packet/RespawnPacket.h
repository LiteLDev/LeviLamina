#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/RespawnPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct RespawnPacketInfo;
// clang-format on

class RespawnPacket : public ::SerializedPayloadPacket<::RespawnPacketInfo, ::RespawnPacketPayload> {
public:
    // RespawnPacket inner types define
    using PayloadType = ::RespawnPacketPayload;

    using PacketInfo = ::RespawnPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RespawnPacket() /*override*/;
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
