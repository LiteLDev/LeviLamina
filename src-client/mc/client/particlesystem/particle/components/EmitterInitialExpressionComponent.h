#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterInitialComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterInitialExpressionComponent : public ::ParticleSystem::EmitterInitialComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mSetupExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mUpdateExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void
    setupInitial(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams) /*override*/;

    virtual void
    update(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams) /*override*/;

    virtual ~EmitterInitialExpressionComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCFOLD void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $setupInitial(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    MCAPI void $update(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
