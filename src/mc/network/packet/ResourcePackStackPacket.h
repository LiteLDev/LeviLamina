#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ResourcePackStackPacket : public ::Packet {
public:
    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const&);
    ResourcePackStackPacket(ResourcePackStackPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackStackPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePackStackPacket();

    MCAPI ResourcePackStackPacket(
        std::vector<struct PackInstanceId> addOnIdsAndVersions,
        std::vector<struct PackInstanceId> texturePackIdsAndVersions,
        class BaseGameVersion const&       baseGameVersion,
        bool                               texturePackRequired,
        class Experiments const&           experiments,
        bool                               includeEditorPacks
    );

    // NOLINTEND
};
