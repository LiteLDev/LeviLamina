#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

class Packet {
public:
    // prevent constructor by default
    Packet& operator=(Packet const&);
    Packet(Packet const&);
    Packet();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Packet();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const = 0;

    // vIndex: 2
    virtual std::string getName() const = 0;

    // vIndex: 3
    virtual class Bedrock::Result<void> checkSize(uint64 packetSize, bool receiverIsServer) const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const = 0;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& bitStream);

    // vIndex: 6
    virtual bool disallowBatching() const;

    // vIndex: 7
    virtual bool isValid() const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream) = 0;

    MCAPI void handle(
        class NetworkIdentifier const& source,
        class NetEventCallback&        callback,
        std::shared_ptr<class Packet>& packet
    );

    MCAPI class Bedrock::Result<void> readNoHeader(class ReadOnlyBinaryStream& bitstream, ::SubClientId const& subid);

    MCAPI void writeWithHeader(::SubClientId subClientId, class BinaryStream& bitstream) const;

    // NOLINTEND
};
