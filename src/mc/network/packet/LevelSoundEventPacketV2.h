#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class LevelSoundEventPacketV2 : public ::Packet {
public:
    Puv::Legacy::LevelSoundEvent mEventId;          // this+0x30
    Vec3                         mPos;              // this+0x34
    int                          mData;             // this+0x40
    std::string                  mEntityIdentifier; // this+0x48
    bool                         mIsBabyMob;        // this+0x68
    bool                         mIsGlobal;         // this+0x69

    // prevent constructor by default
    LevelSoundEventPacketV2& operator=(LevelSoundEventPacketV2 const&);
    LevelSoundEventPacketV2(LevelSoundEventPacketV2 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelSoundEventPacketV2() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelSoundEventPacketV2();

    // NOLINTEND
};
