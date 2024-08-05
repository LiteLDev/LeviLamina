#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NetworkChunkPublisherUpdatePacket : public ::Packet {
public:
    BlockPos              mPosition;    // this+0x30
    uint                  mRadius;      // this+0x3C
    std::vector<ChunkPos> mSavedChunks; // this+0x40

    // prevent constructor by default
    NetworkChunkPublisherUpdatePacket& operator=(NetworkChunkPublisherUpdatePacket const&);
    NetworkChunkPublisherUpdatePacket(NetworkChunkPublisherUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkChunkPublisherUpdatePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI NetworkChunkPublisherUpdatePacket();

    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const& position, uint radius);

    // NOLINTEND
};
