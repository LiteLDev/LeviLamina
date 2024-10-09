#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
    // vIndex: 0
    virtual ~LevelSoundEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelSoundEventPacket();

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
