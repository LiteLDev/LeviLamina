#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorInfo.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AvailableActorIdentifiersPacket : public ::Packet {
public:
    std::vector<ActorInfo> mIdentifierList; // this+0x30

    // prevent constructor by default
    AvailableActorIdentifiersPacket& operator=(AvailableActorIdentifiersPacket const&);
    AvailableActorIdentifiersPacket(AvailableActorIdentifiersPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AvailableActorIdentifiersPacket@@UEAA@XZ
    virtual ~AvailableActorIdentifiersPacket();

    // vIndex: 1, symbol: ?getId@AvailableActorIdentifiersPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AvailableActorIdentifiersPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AvailableActorIdentifiersPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?read@AvailableActorIdentifiersPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8, symbol:
    // ?_read@AvailableActorIdentifiersPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AvailableActorIdentifiersPacket@@QEAA@XZ
    MCAPI AvailableActorIdentifiersPacket();

    // NOLINTEND
};
