#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/MolangVariableMap.h"

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
