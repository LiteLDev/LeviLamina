#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gametest/framework/TestParameters.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GameTestRequestPacket : public ::Packet {
public:
    std::string              mTestName; // this+0x30
    gametest::TestParameters mParams;   // this+0x50

    // prevent constructor by default
    GameTestRequestPacket& operator=(GameTestRequestPacket const&);
    GameTestRequestPacket(GameTestRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameTestRequestPacket@@UEAA@XZ
    virtual ~GameTestRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@GameTestRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@GameTestRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@GameTestRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@GameTestRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0GameTestRequestPacket@@QEAA@XZ
    MCAPI GameTestRequestPacket();

    // symbol: ?getParams@GameTestRequestPacket@@QEBAAEBUTestParameters@gametest@@XZ
    MCAPI struct gametest::TestParameters const& getParams() const;

    // symbol:
    // ?getTestName@GameTestRequestPacket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getTestName() const;

    // NOLINTEND
};
