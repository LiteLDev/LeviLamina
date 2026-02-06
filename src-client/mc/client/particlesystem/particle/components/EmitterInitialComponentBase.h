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

class EmitterInitialComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterInitialComponentBase() /*override*/ = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual void setupInitial(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&) = 0;

    virtual void update(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD void $update(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND
};

} // namespace ParticleSystem
