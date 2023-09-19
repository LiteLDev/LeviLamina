#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetDifficultyPacket : public ::Packet {
public:
    // prevent constructor by default
    SetDifficultyPacket& operator=(SetDifficultyPacket const&);
    SetDifficultyPacket(SetDifficultyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetDifficultyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetDifficultyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetDifficultyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SetDifficultyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1SetDifficultyPacket@@UEAA@XZ
    MCVAPI ~SetDifficultyPacket();

    // symbol: ??0SetDifficultyPacket@@QEAA@W4Difficulty@@@Z
    MCAPI explicit SetDifficultyPacket(::Difficulty);

    // symbol: ??0SetDifficultyPacket@@QEAA@XZ
    MCAPI SetDifficultyPacket();

    // symbol: ?getDifficulty@SetDifficultyPacket@@QEBA?AW4Difficulty@@XZ
    MCAPI ::Difficulty getDifficulty() const;

    // NOLINTEND
};
