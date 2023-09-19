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
    MCAPI class Particle*
    addParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);

    // symbol: ?addParticleEffect@ParticleProvider@@QEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
    MCAPI void addParticleEffect(class HashedString const&, class Vec3 const&, class MolangVariableMap const&);

    // symbol: ??1ParticleProvider@@QEAA@XZ
    MCAPI ~ParticleProvider();

    // NOLINTEND
};
