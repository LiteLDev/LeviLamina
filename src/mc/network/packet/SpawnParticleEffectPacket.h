#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SpawnParticleEffectPacket : public ::Packet {
public:
    // prevent constructor by default
    SpawnParticleEffectPacket& operator=(SpawnParticleEffectPacket const&);
    SpawnParticleEffectPacket(SpawnParticleEffectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnParticleEffectPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SpawnParticleEffectPacket();

    MCAPI SpawnParticleEffectPacket(
        class Vec3 const&                      pos,
        std::string const&                     name,
        uchar                                  vanillaDimensionId,
        std::optional<class MolangVariableMap> molangVariables
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Vec3 const&                      pos,
        std::string const&                     name,
        uchar                                  vanillaDimensionId,
        std::optional<class MolangVariableMap> molangVariables
    );

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
