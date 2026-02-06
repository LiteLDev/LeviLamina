#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
class Vec3;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
// clang-format on

namespace ParticleSystem {

class ParticleAppearanceComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleAppearanceComponentBase() /*override*/ = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual void setInitialState(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams,
        ::Vec3 const&                                     spawnDirection
    );

    virtual void updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle&,
        ::RenderParams&
    );

    virtual void
    updateEmitterAppearance(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD void $setInitialState(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams,
        ::Vec3 const&                                     spawnDirection
    );

    MCFOLD void
    $updateEmitterAppearance(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND
};

} // namespace ParticleSystem
