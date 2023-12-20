#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacket : public ::Packet {
public:
    // prevent constructor by default
    LevelSoundEventPacket& operator=(LevelSoundEventPacket const&);
    LevelSoundEventPacket(LevelSoundEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelSoundEventPacket@@UEAA@XZ
    virtual ~LevelSoundEventPacket();

    // vIndex: 1, symbol: ?getId@LevelSoundEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelSoundEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LevelSoundEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@LevelSoundEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0LevelSoundEventPacket@@QEAA@XZ
    MCAPI LevelSoundEventPacket();

    // symbol:
    // ??0LevelSoundEventPacket@@QEAA@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3@Z
    MCAPI LevelSoundEventPacket(::Puv::Legacy::LevelSoundEvent, class Vec3 const&, int, std::string const&, bool, bool);

    // NOLINTEND
};
