#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterRateComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterRateManualComponent : public ::ParticleSystem::EmitterRateComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mManualParticlesAllowedExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual uint64 getNumberOfParticlesToEmit(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams,
        ::std::chrono::nanoseconds const&                 dt
    ) /*override*/;

    virtual uint64 getNumberOfManualParticlesAllowed(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    ) /*override*/;

    virtual ~EmitterRateManualComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCFOLD void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCFOLD uint64 $getNumberOfParticlesToEmit(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams,
        ::std::chrono::nanoseconds const&                 dt
    );

    MCAPI uint64 $getNumberOfManualParticlesAllowed(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
