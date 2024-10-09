#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ResourcePackDataInfoPacket : public ::Packet {
public:
    // prevent constructor by default
    ResourcePackDataInfoPacket& operator=(ResourcePackDataInfoPacket const&);
    ResourcePackDataInfoPacket(ResourcePackDataInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackDataInfoPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePackDataInfoPacket();

    MCAPI ResourcePackDataInfoPacket(
        std::string const& name,
        uint               chunkSize,
        int                nbChunk,
        uint64             fileSize,
        std::string const& fileHash,
        bool               isPremium,
        ::PackType         packType
    );

    // NOLINTEND
};
