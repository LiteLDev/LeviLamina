#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/level/MolangVariableMap.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SpawnParticleEffectPacket : public ::Packet {
public:
    uchar                            mVanillaDimensionId; // this+0x30
    ActorUniqueID                    mActorId;            // this+0x38
    Vec3                             mPos;                // this+0x40
    std::string                      mEffectName;         // this+0x50
    std::optional<MolangVariableMap> mMolangVariables;    // this+0x70

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
};
