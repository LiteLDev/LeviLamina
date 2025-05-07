#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockPos;
class ClientFrameUpdateContext;
class Dimension;
class ExpressionNode;
class HashedString;
class ParticleRenderData;
class Vec3;
class WeakEntityRef;
struct ActorUniqueID;
namespace ParticleSystem { struct ActorBindInfo; }
// clang-format on

namespace ParticleSystem {

class ParticleEmitter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleEmitter() = default;

    // vIndex: 3
    virtual void setActorBindInfo(::Dimension*, ::ActorUniqueID, ::HashedString const&, ::Vec3 const&) = 0;

    // vIndex: 2
    virtual void setActorBindInfo(::WeakEntityRef, ::HashedString const&, ::Vec3 const&) = 0;

    // vIndex: 1
    virtual void setActorBindInfo(::Actor*, ::HashedString const&, ::Vec3 const&) = 0;

    // vIndex: 4
    virtual void setEnableUpdate(bool) = 0;

    // vIndex: 5
    virtual void setEnableRender(bool) = 0;

    // vIndex: 6
    virtual void runInitializationScript(::ExpressionNode const&) = 0;

    // vIndex: 7
    virtual void onBlockChanged(::BlockPos const&) = 0;

    // vIndex: 8
    virtual void expire() = 0;

    // vIndex: 9
    virtual void emitParticleManually(::Vec3 const&, ::Vec3 const&, float const) = 0;

    // vIndex: 10
    virtual bool isValid() const = 0;

    // vIndex: 11
    virtual bool isManualEmitter() const = 0;

    // vIndex: 12
    virtual bool expirationRequested() const = 0;

    // vIndex: 13
    virtual bool hasExpired() const = 0;

    // vIndex: 14
    virtual ::AABB const& getAABB() const = 0;

    // vIndex: 15
    virtual ::HashedString const& getEffectName() const = 0;

    // vIndex: 16
    virtual uint64 getParticleCount() const = 0;

    // vIndex: 17
    virtual uint64 getEffectEmitterCount() const = 0;

    // vIndex: 18
    virtual uint64 getEffectParticleCount() const = 0;

    // vIndex: 19
    virtual uint64 getTotalEmitterCount() const = 0;

    // vIndex: 20
    virtual uint64 getTotalParticleCount() const = 0;

    // vIndex: 21
    virtual void tick(::std::chrono::nanoseconds const&, float const) = 0;

    // vIndex: 22
    virtual void frameUpdate(::ClientFrameUpdateContext&) = 0;

    // vIndex: 23
    virtual void extractForRendering(::ParticleRenderData&, float) = 0;

    // vIndex: 24
    virtual void setManualParticleEmission(bool) = 0;

    // vIndex: 25
    virtual ::ParticleSystem::ActorBindInfo getActorBindInfo() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ParticleSystem
