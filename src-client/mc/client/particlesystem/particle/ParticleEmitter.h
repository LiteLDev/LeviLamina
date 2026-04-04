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
    virtual ~ParticleEmitter() = default;

    virtual void setActorBindInfo(
        ::Dimension*          dimension,
        ::ActorUniqueID       actorId,
        ::HashedString const& locator,
        ::Vec3 const&         offset
    ) = 0;

    virtual void setActorBindInfo(::WeakEntityRef actorRef, ::HashedString const& locator, ::Vec3 const& offset) = 0;

    virtual void setActorBindInfo(::Actor* actor, ::HashedString const& locator, ::Vec3 const& offset) = 0;

    virtual void setEnableUpdate(bool enable) = 0;

    virtual void setEnableRender(bool enable) = 0;

    virtual void runInitializationScript(::ExpressionNode const& initializationScript) = 0;

    virtual void onBlockChanged(::BlockPos const& blockPosition) = 0;

    virtual void expire() = 0;

    virtual void
    emitParticleManually(::Vec3 const& particlePosition, ::Vec3 const& velocityAdd, float const scaleMult) = 0;

    virtual bool isValid() const = 0;

    virtual bool isManualEmitter() const = 0;

    virtual bool expirationRequested() const = 0;

    virtual bool hasExpired() const = 0;

    virtual ::AABB const& getAABB() const = 0;

    virtual ::HashedString const& getEffectName() const = 0;

    virtual uint64 getParticleCount() const = 0;

    virtual uint64 getEffectEmitterCount() const = 0;

    virtual uint64 getEffectParticleCount() const = 0;

    virtual uint64 getTotalEmitterCount() const = 0;

    virtual uint64 getTotalParticleCount() const = 0;

    virtual void tick(::std::chrono::nanoseconds const& dtIn, float const a) = 0;

    virtual void frameUpdate(::ClientFrameUpdateContext& clientFrameUpdateContext) = 0;

    virtual void extractForRendering(::ParticleRenderData& particleRenderData, float a) = 0;

    virtual void setManualParticleEmission(bool manualParticleEmission) = 0;

    virtual ::ParticleSystem::ActorBindInfo getActorBindInfo() const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::atomic<int64>& mEmitterLifetimeCounter();

    MCAPI static ::std::atomic<int64>& mEmitterRateCounter();

    MCAPI static ::std::atomic<int64>& mParticleAppearanceCounter();

    MCAPI static ::std::atomic<int64>& mParticleEmitterTickCount();

    MCAPI static ::std::atomic<int64>& mParticleLifetimeCounter();

    MCAPI static ::std::atomic<int64>& mParticleMotionCounter();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
