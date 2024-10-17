#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#include "mc/network/packet/UpdateSubChunkNetworkBlockInfo.h"
#include "mc/world/level/ActorBlockSyncMessage.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class UpdateSubChunkBlocksPacket : public ::Packet {
public:
    using BlocksChangedInfo = UpdateSubChunkBlocksChangedInfo;

    BlocksChangedInfo    mBlocksChanged;         // this+0x30
    NetworkBlockPosition mSubChunkBlockPosition; // this+0x60

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

    MCAPI UpdateSubChunkBlocksPacket(
        std::vector<struct UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        std::vector<struct UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );

    MCAPI void setSubChunkPosition(class SubChunkPos const& subChunkPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::vector<struct UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        std::vector<struct UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
