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
