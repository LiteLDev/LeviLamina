#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
// clang-format on

namespace ParticleSystem {

class EmitterLifetimeComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterLifetimeComponentBase() /*override*/ = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual bool emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    virtual bool hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    virtual bool isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&);

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&);

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::std::chrono::nanoseconds const,
        ::std::chrono::nanoseconds
    );

    virtual void handleTravelDistanceEvents(::ParticleSystem::ComponentAccessParticleEmitter&, float, float);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ParticleSystem
