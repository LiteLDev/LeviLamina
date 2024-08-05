#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelChunkPacket : public ::Packet {
public:
    // prevent constructor by default
    LevelChunkPacket& operator=(LevelChunkPacket const&);
    LevelChunkPacket(LevelChunkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelChunkPacket();

    MCAPI void pushSubChunkMetadata(uint64 id);

    MCAPI class Bedrock::Result<void> readCacheMetadata(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
