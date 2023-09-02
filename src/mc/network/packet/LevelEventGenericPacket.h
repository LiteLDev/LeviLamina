#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/LevelEvent.h"
#include "mc/network/packet/Packet.h"

class LevelEventGenericPacket : public ::Packet {
public:
    int                          mEventId; // this+0x30
    std::unique_ptr<CompoundTag> mData;    // this+0x38

    // prevent constructor by default
    LevelEventGenericPacket& operator=(LevelEventGenericPacket const&) = delete;
    LevelEventGenericPacket(LevelEventGenericPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@LevelEventGenericPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelEventGenericPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@LevelEventGenericPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@LevelEventGenericPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1LevelEventGenericPacket@@UEAA@XZ
    MCVAPI ~LevelEventGenericPacket();

    // symbol: ??0LevelEventGenericPacket@@QEAA@XZ
    MCAPI LevelEventGenericPacket();

    // symbol: ??0LevelEventGenericPacket@@QEAA@W4LevelEvent@@AEBVCompoundTag@@@Z
    MCAPI LevelEventGenericPacket(::LevelEvent, class CompoundTag const&);

    // NOLINTEND
};
