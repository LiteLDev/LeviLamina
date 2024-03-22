#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AgentAnimationPacket : public ::Packet {
public:
    AgentAnimation mAnimation;
    ActorRuntimeID mEntityRuntimeID;

    // prevent constructor by default
    AgentAnimationPacket& operator=(AgentAnimationPacket const&);
    AgentAnimationPacket(AgentAnimationPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AgentAnimationPacket@@UEAA@XZ
    virtual ~AgentAnimationPacket();

    // vIndex: 1, symbol: ?getId@AgentAnimationPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AgentAnimationPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AgentAnimationPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol:
    // ?_read@AgentAnimationPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0AgentAnimationPacket@@QEAA@XZ
    MCAPI AgentAnimationPacket();

    // symbol: ??0AgentAnimationPacket@@QEAA@W4AgentAnimation@@VActorRuntimeID@@@Z
    MCAPI AgentAnimationPacket(::AgentAnimation, class ActorRuntimeID);

    // NOLINTEND
};
