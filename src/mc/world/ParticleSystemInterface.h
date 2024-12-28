#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ParticleType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class MolangVariableMap;
class Particle;
class Vec3;
// clang-format on

class ParticleSystemInterface {
public:
    // prevent constructor by default
    ParticleSystemInterface& operator=(ParticleSystemInterface const&);
    ParticleSystemInterface(ParticleSystemInterface const&);
    ParticleSystemInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleSystemInterface();

    // vIndex: 1
    virtual float getDistanceToCameraSqr(::Vec3 const&) const = 0;

    // vIndex: 2
    virtual bool isPositionTooCloseToCamera(::Vec3 const&) const = 0;

    // vIndex: 3
    virtual int getViewDistanceChunks() const = 0;

    // vIndex: 4
    virtual float getParticleViewDistance() const = 0;

    // vIndex: 5
    virtual bool isVRMode() const = 0;

    // vIndex: 6
    virtual ::Particle* instance(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*) = 0;

    // vIndex: 7
    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
