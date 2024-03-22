#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GameTestResultsPacket : public ::Packet {
public:
    std::string mTestName;  // this+0x30
    std::string mError;     // this+0x50
    bool        mSucceeded; // this+0x70

    // prevent constructor by default
    GameTestResultsPacket& operator=(GameTestResultsPacket const&);
    GameTestResultsPacket(GameTestResultsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1GameTestResultsPacket@@UEAA@XZ
    virtual ~GameTestResultsPacket();

    // vIndex: 1, symbol: ?getId@GameTestResultsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@GameTestResultsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@GameTestResultsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@GameTestResultsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0GameTestResultsPacket@@QEAA@XZ
    MCAPI GameTestResultsPacket();

    // symbol: ??0GameTestResultsPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
    MCAPI GameTestResultsPacket(std::string const&, std::string const& error, bool succeeded);

    // NOLINTEND
};
