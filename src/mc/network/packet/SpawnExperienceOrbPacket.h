#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
