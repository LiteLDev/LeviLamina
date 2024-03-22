#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/Difficulty.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetDifficultyPacket : public ::Packet {
public:
    Difficulty mDifficulty; // this+0x30

    // prevent constructor by default
    SetDifficultyPacket& operator=(SetDifficultyPacket const&);
    SetDifficultyPacket(SetDifficultyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetDifficultyPacket@@UEAA@XZ
    virtual ~SetDifficultyPacket();

    // vIndex: 1, symbol: ?getId@SetDifficultyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetDifficultyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetDifficultyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetDifficultyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetDifficultyPacket@@QEAA@XZ
    MCAPI SetDifficultyPacket();

    // symbol: ??0SetDifficultyPacket@@QEAA@W4Difficulty@@@Z
    MCAPI explicit SetDifficultyPacket(::Difficulty difficulty);

    // symbol: ?getDifficulty@SetDifficultyPacket@@QEBA?AW4Difficulty@@XZ
    MCAPI ::Difficulty getDifficulty() const;

    // NOLINTEND
};
