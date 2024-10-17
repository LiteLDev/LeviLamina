#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct ActorUniqueID mapId, class MapItemSavedData& map);

    MCAPI void* ctor$(struct ActorUniqueID mapId);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
