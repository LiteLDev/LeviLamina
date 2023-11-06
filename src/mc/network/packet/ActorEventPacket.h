#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/ActorEvent.h"
#include "mc/network/packet/Packet.h"

class ActorEventPacket : public ::Packet {
public:
    // prevent constructor by default
    ActorEventPacket& operator=(ActorEventPacket const&);
    ActorEventPacket(ActorEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorEventPacket@@UEAA@XZ
    virtual ~ActorEventPacket();

    // vIndex: 1, symbol: ?getId@ActorEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ActorEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ActorEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@ActorEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0ActorEventPacket@@QEAA@XZ
    MCAPI ActorEventPacket();

    // symbol: ??0ActorEventPacket@@QEAA@VActorRuntimeID@@W4ActorEvent@@H@Z
    MCAPI ActorEventPacket(class ActorRuntimeID, ::ActorEvent, int);

    // NOLINTEND
};
