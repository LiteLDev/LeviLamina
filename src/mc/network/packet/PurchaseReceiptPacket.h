#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PurchaseReceiptPacket : public ::Packet {
public:
    // prevent constructor by default
    PurchaseReceiptPacket& operator=(PurchaseReceiptPacket const&);
    PurchaseReceiptPacket(PurchaseReceiptPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PurchaseReceiptPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PurchaseReceiptPacket();

    MCAPI static uint64 const sMaxReceiptsPerPacket;

    // NOLINTEND
};
