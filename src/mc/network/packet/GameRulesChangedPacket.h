#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/GameRulesChangedPacketData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GameRulesChangedPacket : public ::Packet {
public:
    GameRulesChangedPacketData mRuleData; // this+0x30

    // prevent constructor by default
    GameRulesChangedPacket& operator=(GameRulesChangedPacket const&);
    GameRulesChangedPacket(GameRulesChangedPacket const&);
    GameRulesChangedPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameRulesChangedPacket@@UEAA@XZ
    virtual ~GameRulesChangedPacket() = default;

    // vIndex: 1, symbol: ?getId@GameRulesChangedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@GameRulesChangedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@GameRulesChangedPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@GameRulesChangedPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
