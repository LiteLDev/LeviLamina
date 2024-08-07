#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SpawnExperienceOrbPacket : public ::Packet {
public:
    Vec3 mPos;   // this+0x30
    int  mCount; // this+0x3C

    // prevent constructor by default
    SpawnExperienceOrbPacket& operator=(SpawnExperienceOrbPacket const&);
    SpawnExperienceOrbPacket(SpawnExperienceOrbPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnExperienceOrbPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SpawnExperienceOrbPacket();

    MCAPI SpawnExperienceOrbPacket(class Vec3 const& pos, int xpValue);

    // NOLINTEND
};
