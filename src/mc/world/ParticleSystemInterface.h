#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class MolangVariableMap;
class Vec3;
class Particle;
// clang-format on

class ParticleSystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleSystemInterface() = default;

    virtual float getDistanceToCameraSqr(::Vec3 const&) const = 0;

    virtual int getViewDistanceChunks() const = 0;

    virtual float getParticleViewDistance() const = 0;

    virtual ::Particle* instance(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*) = 0;

    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
