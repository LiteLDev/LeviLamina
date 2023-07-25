#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticleProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEPROVIDER
public:
    ParticleProvider& operator=(ParticleProvider const&) = delete;
    ParticleProvider(ParticleProvider const&)            = delete;
    ParticleProvider()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?addParticle\@ParticleProvider\@\@QEAAPEAVParticle\@\@W4ParticleType\@\@AEBVVec3\@\@1HPEBVCompoundTag\@\@_N\@Z
     */
    MCAPI class Particle*
    addParticle(enum class ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);
    /**
     * @symbol ?addParticleEffect\@ParticleProvider\@\@QEAAXAEBVHashedString\@\@AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCAPI void addParticleEffect(class HashedString const&, class Vec3 const&, class MolangVariableMap const&);
    /**
     * @symbol ??1ParticleProvider\@\@QEAA\@XZ
     */
    MCAPI ~ParticleProvider();
};
