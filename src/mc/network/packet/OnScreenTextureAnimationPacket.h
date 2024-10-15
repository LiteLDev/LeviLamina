#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class OnScreenTextureAnimationPacket : public ::Packet {
public:
    uint mEffectID; // this+0x30

    // prevent constructor by default
    OnScreenTextureAnimationPacket& operator=(OnScreenTextureAnimationPacket const&);
    OnScreenTextureAnimationPacket(OnScreenTextureAnimationPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnScreenTextureAnimationPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI OnScreenTextureAnimationPacket();

    MCAPI explicit OnScreenTextureAnimationPacket(uint effectID);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(uint effectID);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
