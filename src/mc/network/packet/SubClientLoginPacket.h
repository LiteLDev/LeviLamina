#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/SubClientConnectionRequest.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SubClientLoginPacket : public ::Packet {
public:
    std::unique_ptr<SubClientConnectionRequest> mConnectionRequest; // this+0x30

    // prevent constructor by default
    SubClientLoginPacket& operator=(SubClientLoginPacket const&);
    SubClientLoginPacket(SubClientLoginPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubClientLoginPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 6
    virtual bool disallowBatching() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SubClientLoginPacket();

    // NOLINTEND
};
