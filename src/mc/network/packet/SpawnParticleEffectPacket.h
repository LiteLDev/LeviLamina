#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/level/MolangVariableMap.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SpawnParticleEffectPacket : public ::Packet {
public:
    uchar                            mVanillaDimensionId; // this+0x30
    ActorUniqueID                    mActorId;            // this+0x38
    Vec3                             mPos;                // this+0x40
    std::string                      mEffectName;         // this+0x50
    std::optional<MolangVariableMap> mMolangVariables;    // this+0x70

    // prevent constructor by default
    SpawnParticleEffectPacket& operator=(SpawnParticleEffectPacket const&);
    SpawnParticleEffectPacket(SpawnParticleEffectPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SpawnParticleEffectPacket@@UEAA@XZ
    virtual ~SpawnParticleEffectPacket();

    // vIndex: 1, symbol: ?getId@SpawnParticleEffectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SpawnParticleEffectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SpawnParticleEffectPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@SpawnParticleEffectPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SpawnParticleEffectPacket@@QEAA@XZ
    MCAPI SpawnParticleEffectPacket();

    // symbol:
    // ??0SpawnParticleEffectPacket@@QEAA@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@EV?$optional@VMolangVariableMap@@@3@@Z
    MCAPI
    SpawnParticleEffectPacket(class Vec3 const&, std::string const&, uchar, std::optional<class MolangVariableMap>);

    // NOLINTEND
};
