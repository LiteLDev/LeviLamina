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

class EmitterRateComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterRateComponentBase() /*override*/ = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual uint64 getNumberOfParticlesToEmit(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::RenderParams&,
        ::std::chrono::nanoseconds const&
    ) = 0;

    virtual uint64 getNumberOfManualParticlesAllowed(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD uint64 $getNumberOfManualParticlesAllowed(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    );
    // NOLINTEND
};

} // namespace ParticleSystem
