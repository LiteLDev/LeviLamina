#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/TransferPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct TransferPacketInfo;
// clang-format on

class TransferPacket : public ::SerializedPayloadPacket<::TransferPacketInfo, ::TransferPacketPayload> {
public:
    // TransferPacket inner types define
    using PayloadType = ::TransferPacketPayload;

    using PacketInfo = ::TransferPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransferPacket() /*override*/;
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
