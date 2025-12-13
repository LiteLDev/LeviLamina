#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockPos;
class Dimension;
class ExpressionNode;
class HashedString;
class ParticleRenderData;
class Vec3;
class WeakEntityRef;
struct ActorUniqueID;
namespace Core::Profile { class CPUProfileToken; }
namespace Core::Profile { class CounterToken; }
namespace ParticleSystem { struct ActorBindInfo; }
struct ClientFrameUpdateContext;
// clang-format on

namespace ParticleSystem {

class ParticleEmitter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleEmitter() = default;

    virtual void setActorBindInfo(::Dimension*, ::ActorUniqueID, ::HashedString const&, ::Vec3 const&) = 0;

    virtual void setActorBindInfo(::WeakEntityRef, ::HashedString const&, ::Vec3 const&) = 0;

    virtual void setActorBindInfo(::Actor*, ::HashedString const&, ::Vec3 const&) = 0;

    virtual void setEnableUpdate(bool) = 0;

    virtual void setEnableRender(bool) = 0;

    virtual void runInitializationScript(::ExpressionNode const&) = 0;

    virtual void onBlockChanged(::BlockPos const&) = 0;

    virtual void expire() = 0;

    virtual void emitParticleManually(::Vec3 const&, ::Vec3 const&, float const) = 0;

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

    virtual void tick(::std::chrono::nanoseconds const&, float const) = 0;

    virtual void frameUpdate(::ClientFrameUpdateContext&) = 0;

    virtual void extractForRendering(::ParticleRenderData&, float) = 0;

    virtual void setManualParticleEmission(bool) = 0;

    virtual ::ParticleSystem::ActorBindInfo getActorBindInfo() const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::Core::Profile::CounterToken& mEmitterLifetimeCounterToken();

    MCNAPI_C static ::Core::Profile::CounterToken& mEmitterRateCounterToken();

    MCNAPI_C static ::Core::Profile::CounterToken& mParticleAppearanceCounterToken();

    MCNAPI_C static ::Core::Profile::CPUProfileToken& mParticleCollisionTimeToken();

    MCNAPI_C static ::Core::Profile::CounterToken& mParticleEmitterTickCountToken();

    MCNAPI_C static ::Core::Profile::CounterToken& mParticleLifetimeCounterToken();

    MCNAPI_C static ::Core::Profile::CounterToken& mParticleMotionCounterToken();
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
