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

    virtual bool
    emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    virtual bool
    hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    virtual bool
    isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );

    virtual void handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCNAPI bool
    $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    MCNAPI bool
    $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    MCNAPI bool
    $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    MCNAPI void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCNAPI void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCNAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );

    MCNAPI void $handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    );
    // NOLINTEND
};

} // namespace ParticleSystem
