#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateSubChunkBlocksPacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacket& operator=(UpdateSubChunkBlocksPacket const&);
    UpdateSubChunkBlocksPacket(UpdateSubChunkBlocksPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateSubChunkBlocksPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateSubChunkBlocksPacket();

    MCAPI
    UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkNetworkBlockInfo> const&, std::vector<struct UpdateSubChunkNetworkBlockInfo> const&);

    MCAPI void setSubChunkPosition(class SubChunkPos const& subChunkPos);

    // NOLINTEND
};
