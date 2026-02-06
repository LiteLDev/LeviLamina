#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
// clang-format on

namespace ParticleSystem {

class ParticleLifetimeComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleLifetimeComponentBase() /*override*/ = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual bool hasParticleExpired(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    );

    virtual void setParticleLifetime(::ParticleSystem::CommonParticle& particle, ::RenderParams& renderParams);

    virtual void handleCreation(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    virtual void handleExpiration(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD bool $hasParticleExpired(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    );

    MCFOLD void $setParticleLifetime(::ParticleSystem::CommonParticle& particle, ::RenderParams& renderParams);

    MCFOLD void $handleCreation(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    MCFOLD void $handleExpiration(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    MCFOLD void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );
    // NOLINTEND
};

} // namespace ParticleSystem
