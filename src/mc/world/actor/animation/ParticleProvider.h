#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"

class ParticleProvider {
public:
    // prevent constructor by default
    ParticleProvider& operator=(ParticleProvider const&);
    ParticleProvider(ParticleProvider const&);
    ParticleProvider();

public:
    // NOLINTBEGIN
    // symbol: ?addParticle@ParticleProvider@@QEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
    MCAPI class Particle* addParticle(
        ::ParticleType           type,
        class Vec3 const&        pos,
        class Vec3 const&        dir,
        int                      data,
        class CompoundTag const* tag,
        bool                     isGlobal
    );

    // symbol: ?addParticleEffect@ParticleProvider@@QEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
    MCAPI void addParticleEffect(
        class HashedString const&      effect,
        class Vec3 const&              emitterPosition,
        class MolangVariableMap const& molangVariables
    );

    // symbol: ??1ParticleProvider@@QEAA@XZ
    MCAPI ~ParticleProvider();

    // NOLINTEND
};
