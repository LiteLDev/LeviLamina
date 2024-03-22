#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class StopSoundPacket : public ::Packet {
public:
    std::string mName;    // this+0x30
    bool        mStopAll; // this+0x50

    // prevent constructor by default
    StopSoundPacket& operator=(StopSoundPacket const&);
    StopSoundPacket(StopSoundPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StopSoundPacket@@UEAA@XZ
    virtual ~StopSoundPacket();

    // vIndex: 1, symbol: ?getId@StopSoundPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@StopSoundPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@StopSoundPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@StopSoundPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0StopSoundPacket@@QEAA@XZ
    MCAPI StopSoundPacket();

    // symbol: ??0StopSoundPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI StopSoundPacket(std::string const& name, bool stopAll);

    // NOLINTEND
};
