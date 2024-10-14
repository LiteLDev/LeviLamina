#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PlaySoundPacket : public ::Packet {
public:
    std::string          mName;   // this+0x30
    NetworkBlockPosition mPos;    // this+0x50
    float                mVolume; // this+0x5C
    float                mPitch;  // this+0x60

    // prevent constructor by default
    PlaySoundPacket& operator=(PlaySoundPacket const&);
    PlaySoundPacket(PlaySoundPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlaySoundPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlaySoundPacket();

    MCAPI PlaySoundPacket(std::string name, class Vec3 const& pos, float volume, float pitch);

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
