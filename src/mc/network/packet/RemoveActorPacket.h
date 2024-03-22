#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RemoveActorPacket : public ::Packet {
public:
    ActorUniqueID mEntityId; // this+0x30

    // prevent constructor by default
    RemoveActorPacket& operator=(RemoveActorPacket const&);
    RemoveActorPacket(RemoveActorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RemoveActorPacket@@UEAA@XZ
    virtual ~RemoveActorPacket();

    // vIndex: 1, symbol: ?getId@RemoveActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RemoveActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RemoveActorPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@RemoveActorPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0RemoveActorPacket@@QEAA@XZ
    MCAPI RemoveActorPacket();

    // symbol: ??0RemoveActorPacket@@QEAA@UActorUniqueID@@@Z
    MCAPI explicit RemoveActorPacket(struct ActorUniqueID entityId);

    // NOLINTEND
};
