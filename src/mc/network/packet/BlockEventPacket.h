#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/BlockEventPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct BlockEventPacketInfo;
// clang-format on

class BlockEventPacket : public ::SerializedPayloadPacket<::BlockEventPacketInfo, ::BlockEventPacketPayload> {
public:
    // BlockEventPacket inner types define
    using PayloadType = ::BlockEventPacketPayload;

    using PacketInfo = ::BlockEventPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventPacket() /*override*/;
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
