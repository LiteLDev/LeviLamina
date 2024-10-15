#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ResourcePacksInfoPacket : public ::Packet {
public:
    // prevent constructor by default
    ResourcePacksInfoPacket& operator=(ResourcePacksInfoPacket const&);
    ResourcePacksInfoPacket(ResourcePacksInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePacksInfoPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ResourcePacksInfoPacket();

    MCAPI ResourcePacksInfoPacket(
        bool                                               resourcePackRequired,
        std::vector<struct PackInfoData>&                  behaviorPacks,
        std::vector<struct PackInfoData>&                  resourcePacks,
        bool                                               forceServerPacksEnabled,
        std::vector<std::pair<std::string, std::string>>&& cdnUrls,
        bool                                               hasAddonPacks
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        bool                                               resourcePackRequired,
        std::vector<struct PackInfoData>&                  behaviorPacks,
        std::vector<struct PackInfoData>&                  resourcePacks,
        bool                                               forceServerPacksEnabled,
        std::vector<std::pair<std::string, std::string>>&& cdnUrls,
        bool                                               hasAddonPacks
    );

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
