#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"
#include "mc/enums/AgentActionType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AgentActionType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AgentActionEventPacket : public ::Packet {
public:
    AgentActionType mAction;    // this+0x2c
    std::string     mRequestId; // this+0x30
    Json::Value     mResponse;  // this+0x50

    // prevent constructor by default
    AgentActionEventPacket& operator=(AgentActionEventPacket const&);
    AgentActionEventPacket(AgentActionEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AgentActionEventPacket@@UEAA@XZ
    virtual ~AgentActionEventPacket();

    // vIndex: 1, symbol: ?getId@AgentActionEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AgentActionEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AgentActionEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@AgentActionEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AgentActionEventPacket@@QEAA@XZ
    MCAPI AgentActionEventPacket();

    // symbol:
    // ??0AgentActionEventPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AgentActionType@@AEBVValue@Json@@@Z
    MCAPI
    AgentActionEventPacket(std::string const& requestId, ::AgentActionType action, class Json::Value const& response);

    // NOLINTEND
};
