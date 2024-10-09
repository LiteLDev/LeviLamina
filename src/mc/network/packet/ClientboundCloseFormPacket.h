#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ClientboundCloseFormPacket : public ::Packet {
public:
    // prevent constructor by default
    ClientboundCloseFormPacket& operator=(ClientboundCloseFormPacket const&);
    ClientboundCloseFormPacket(ClientboundCloseFormPacket const&);
    ClientboundCloseFormPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientboundCloseFormPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
