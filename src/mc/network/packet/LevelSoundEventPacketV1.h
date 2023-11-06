#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacketV1 : public ::Packet {
public:
    // prevent constructor by default
    LevelSoundEventPacketV1& operator=(LevelSoundEventPacketV1 const&);
    LevelSoundEventPacketV1(LevelSoundEventPacketV1 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LevelSoundEventPacketV1() = default;

    // vIndex: 1, symbol: ?getId@LevelSoundEventPacketV1@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelSoundEventPacketV1@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LevelSoundEventPacketV1@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@LevelSoundEventPacketV1@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0LevelSoundEventPacketV1@@QEAA@XZ
    MCAPI LevelSoundEventPacketV1();

    // NOLINTEND
};
