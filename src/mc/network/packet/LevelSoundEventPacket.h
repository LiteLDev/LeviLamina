#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacket : public ::Packet {
public:
    Puv::Legacy::LevelSoundEvent mEventId;          // this+0x30
    Vec3                         mPos;              // this+0x34
    int                          mData;             // this+0x40
    std::string                  mEntityIdentifier; // this+0x48
    bool                         mIsBabyMob;        // this+0x68
    bool                         mIsGlobal;         // this+0x69


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

    // vIndex: 4, symbol: ?write@LevelSoundEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LevelSoundEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LevelSoundEventPacket@@QEAA@XZ
    MCAPI LevelSoundEventPacket();

    // symbol:
    // ??0LevelSoundEventPacket@@QEAA@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3@Z
    MCAPI LevelSoundEventPacket(
        ::Puv::Legacy::LevelSoundEvent id,
        class Vec3 const&              pos,
        int                            data,
        std::string const&             entityType,
        bool                           isBabyMob,
        bool                           isGlobal
    );

    // NOLINTEND
};
