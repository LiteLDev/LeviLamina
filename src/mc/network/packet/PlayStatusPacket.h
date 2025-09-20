#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayStatusPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct PlayStatusPacketInfo;
// clang-format on

class PlayStatusPacket : public ::SerializedPayloadPacket<::PlayStatusPacketInfo, ::PlayStatusPacketPayload> {
public:
    // PlayStatusPacket inner types define
    using PayloadType = ::PlayStatusPacketPayload;

    using PacketInfo = ::PlayStatusPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayStatusPacket() /*override*/;
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
