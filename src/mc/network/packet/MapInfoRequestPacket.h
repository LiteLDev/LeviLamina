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
    // vIndex: 0, symbol: ??1MapInfoRequestPacket@@UEAA@XZ
    virtual ~MapInfoRequestPacket();

    // vIndex: 1, symbol: ?getId@MapInfoRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MapInfoRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MapInfoRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@MapInfoRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MapInfoRequestPacket@@QEAA@XZ
    MCAPI MapInfoRequestPacket();

    // symbol: ??0MapInfoRequestPacket@@QEAA@UActorUniqueID@@@Z
    MCAPI explicit MapInfoRequestPacket(struct ActorUniqueID mapId);

    // symbol: ??0MapInfoRequestPacket@@QEAA@UActorUniqueID@@AEAVMapItemSavedData@@@Z
    MCAPI MapInfoRequestPacket(struct ActorUniqueID mapId, class MapItemSavedData& map);

    // symbol: ?getMapId@MapInfoRequestPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getMapId() const;

    // symbol: ?replaceServerPixels@MapInfoRequestPacket@@QEBA_NAEAVMapItemSavedData@@@Z
    MCAPI bool replaceServerPixels(class MapItemSavedData& map) const;

    // NOLINTEND
};
