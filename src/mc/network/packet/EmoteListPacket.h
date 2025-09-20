#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/EmoteListPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct EmoteListPacketInfo;
// clang-format on

class EmoteListPacket : public ::SerializedPayloadPacket<::EmoteListPacketInfo, ::EmoteListPacketPayload> {
public:
    // EmoteListPacket inner types define
    using PayloadType = ::EmoteListPacketPayload;

    using PacketInfo = ::EmoteListPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmoteListPacket() /*override*/;
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
