#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacketV2 : public ::Packet {
public:
    // prevent constructor by default
    LevelSoundEventPacketV2& operator=(LevelSoundEventPacketV2 const&);
    LevelSoundEventPacketV2(LevelSoundEventPacketV2 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelSoundEventPacketV2@@UEAA@XZ
    virtual ~LevelSoundEventPacketV2() = default;

    // vIndex: 1, symbol: ?getId@LevelSoundEventPacketV2@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelSoundEventPacketV2@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LevelSoundEventPacketV2@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@LevelSoundEventPacketV2@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LevelSoundEventPacketV2@@QEAA@XZ
    MCAPI LevelSoundEventPacketV2();

    // NOLINTEND
};
