/**
 * @file  ParticleProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ParticleProvider {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEPROVIDER
public:
    class ParticleProvider& operator=(class ParticleProvider const &) = delete;
    ParticleProvider(class ParticleProvider const &) = delete;
    ParticleProvider() = delete;
#endif

public:
    /**
     * @symbol ?addParticle\@ParticleProvider\@\@QEAAPEAVParticle\@\@W4ParticleType\@\@AEBVVec3\@\@1HPEBVCompoundTag\@\@_N\@Z
     */
    MCAPI class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @symbol ?addParticleEffect\@ParticleProvider\@\@QEAAXAEBVHashedString\@\@AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCAPI void addParticleEffect(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @symbol ??1ParticleProvider\@\@QEAA\@XZ
     */
    MCAPI ~ParticleProvider();

};
