#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/AgentActionType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AgentActionEventPacket : public ::Packet {
public:
    // prevent constructor by default
    AgentActionEventPacket& operator=(AgentActionEventPacket const&);
    AgentActionEventPacket(AgentActionEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AgentActionEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AgentActionEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AgentActionEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@AgentActionEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1AgentActionEventPacket@@UEAA@XZ
    MCVAPI ~AgentActionEventPacket();

    // symbol:
    // ??0AgentActionEventPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AgentActionType@@AEBVValue@Json@@@Z
    MCAPI AgentActionEventPacket(std::string const&, ::AgentActionType, class Json::Value const&);

    // symbol: ??0AgentActionEventPacket@@QEAA@XZ
    MCAPI AgentActionEventPacket();

    // NOLINTEND
};
