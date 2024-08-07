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
    // vIndex: 0
    virtual ~LevelEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelEventPacket();

    MCAPI LevelEventPacket(::LevelEvent eventId, class Vec3 const& pos, int data);

    MCAPI LevelEventPacket(::LevelEvent eventId, float x, float y, float z, int data);

    // NOLINTEND
};
