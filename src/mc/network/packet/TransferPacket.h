#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class TransferPacket : public ::Packet {
public:
    std::string mServerAddress; // this+0x30
    int         mServerPort;    // this+0x50

    // prevent constructor by default
    TransferPacket& operator=(TransferPacket const&);
    TransferPacket(TransferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransferPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI TransferPacket();

    MCAPI TransferPacket(std::string const& serverAddress, int serverPort);

    // NOLINTEND
};
