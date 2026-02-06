#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterLifetimeOnceComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mActivationTimeExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual bool emitterResetting(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    ) /*override*/;

    virtual bool hasEmitterExpired(
        ::ParticleSystem::ComponentAccessParticleEmitter const& emitter,
        ::RenderParams&                                         renderParams
    ) /*override*/;

    virtual bool isEmitterActive(
        ::ParticleSystem::ComponentAccessParticleEmitter const& emitter,
        ::RenderParams&                                         renderParams
    ) /*override*/;

    virtual ~EmitterLifetimeOnceComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCFOLD void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI bool
    $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    MCFOLD bool
    $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    MCFOLD bool
    $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
