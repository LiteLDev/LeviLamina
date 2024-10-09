#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ServerStatsPacket : public ::Packet {
public:
    // prevent constructor by default
    ServerStatsPacket& operator=(ServerStatsPacket const&);
    ServerStatsPacket(ServerStatsPacket const&);
    ServerStatsPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerStatsPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
