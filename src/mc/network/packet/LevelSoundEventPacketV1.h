#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacketV1 : public ::Packet {
public:
    Puv::Legacy::LevelSoundEvent mEventId;    // this+0x30
    Vec3                         mPos;        // this+0x34
    int                          mData;       // this+0x40
    ActorType                    mEntityType; // this+0x44
    bool                         mIsBabyMob;  // this+0x48
    bool                         mIsGlobal;   // this+0x49

    // prevent constructor by default
    LevelSoundEventPacketV1& operator=(LevelSoundEventPacketV1 const&);
    LevelSoundEventPacketV1(LevelSoundEventPacketV1 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelSoundEventPacketV1@@UEAA@XZ
    virtual ~LevelSoundEventPacketV1() = default;

    // vIndex: 1, symbol: ?getId@LevelSoundEventPacketV1@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@LevelSoundEventPacketV1@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@LevelSoundEventPacketV1@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@LevelSoundEventPacketV1@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0LevelSoundEventPacketV1@@QEAA@XZ
    MCAPI LevelSoundEventPacketV1();

    // NOLINTEND
};
