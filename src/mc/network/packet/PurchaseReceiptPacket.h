#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PurchaseReceiptPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct PurchaseReceiptPacketInfo;
// clang-format on

class PurchaseReceiptPacket
: public ::SerializedPayloadPacket<::PurchaseReceiptPacketInfo, ::PurchaseReceiptPacketPayload> {
public:
    // PurchaseReceiptPacket inner types define
    using PayloadType = ::PurchaseReceiptPacketPayload;

    using PacketInfo = ::PurchaseReceiptPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PurchaseReceiptPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
