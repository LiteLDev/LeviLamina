#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/LevelEvent.h"
#include "mc/network/packet/Packet.h"

class LevelEventPacket : public ::Packet {
public:
    int  mEventId; // this+0x30
    Vec3 mPos;     // this+0x34
    int  mData;    // this+0x40

    // prevent constructor by default
    LevelEventPacket& operator=(LevelEventPacket const&);
    LevelEventPacket(LevelEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelEventPacket@@UEAA@XZ
    virtual ~LevelEventPacket();

    // vIndex: 1, symbol: ?getId@LevelEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LevelEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LevelEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LevelEventPacket@@QEAA@XZ
    MCAPI LevelEventPacket();

    // symbol: ??0LevelEventPacket@@QEAA@W4LevelEvent@@AEBVVec3@@H@Z
    MCAPI LevelEventPacket(::LevelEvent eventId, class Vec3 const& pos, int data);

    // symbol: ??0LevelEventPacket@@QEAA@W4LevelEvent@@MMMH@Z
    MCAPI LevelEventPacket(::LevelEvent eventId, float x, float y, float z, int data);

    // NOLINTEND
};
