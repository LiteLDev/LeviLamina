#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MapCreateLockedCopyPacket : public ::Packet {
public:
    ActorUniqueID mOriginalMapId; // this+0x30
    ActorUniqueID mNewMapId;      // this+0x38

    // prevent constructor by default
    MapCreateLockedCopyPacket& operator=(MapCreateLockedCopyPacket const&);
    MapCreateLockedCopyPacket(MapCreateLockedCopyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MapCreateLockedCopyPacket@@UEAA@XZ
    virtual ~MapCreateLockedCopyPacket();

    // vIndex: 1, symbol: ?getId@MapCreateLockedCopyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MapCreateLockedCopyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@MapCreateLockedCopyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@MapCreateLockedCopyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0MapCreateLockedCopyPacket@@QEAA@XZ
    MCAPI MapCreateLockedCopyPacket();

    // symbol: ??0MapCreateLockedCopyPacket@@QEAA@UActorUniqueID@@0@Z
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID originalMapId, struct ActorUniqueID newMapId);

    // symbol: ?getNewMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getNewMapId() const;

    // symbol: ?getOriginalMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getOriginalMapId() const;

    // NOLINTEND
};
