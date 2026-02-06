#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { struct CommonParticle; }
// clang-format on

namespace ParticleSystem {

class ParticleInitialComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleInitialComponentBase() /*override*/;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual void setInitialState(::ParticleSystem::CommonParticle&, ::RenderParams&) = 0;

    virtual void update(::RenderParams& renderParams);

    virtual void renderPreparation(::RenderParams& renderParams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD void $update(::RenderParams& renderParams);

    MCFOLD void $renderPreparation(::RenderParams& renderParams);
    // NOLINTEND
};

} // namespace ParticleSystem
