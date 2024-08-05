#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MapInfoRequestPacket : public ::Packet {
public:
    ActorUniqueID                        mMapId;        // this+0x30
    std::vector<std::pair<uint, ushort>> mClientPixels; // this+0x38

    // prevent constructor by default
    MapInfoRequestPacket& operator=(MapInfoRequestPacket const&);
    MapInfoRequestPacket(MapInfoRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapInfoRequestPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MapInfoRequestPacket();

    MCAPI explicit MapInfoRequestPacket(struct ActorUniqueID mapId);

    MCAPI MapInfoRequestPacket(struct ActorUniqueID mapId, class MapItemSavedData& map);

    MCAPI struct ActorUniqueID getMapId() const;

    MCAPI bool replaceServerPixels(class MapItemSavedData& map) const;

    // NOLINTEND
};
