#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleInitialComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleInitialExpressionComponent : public ::ParticleSystem::ParticleInitialComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mUpdateExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mRenderExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void setInitialState(::ParticleSystem::CommonParticle& particle, ::RenderParams& renderParams) /*override*/;

    virtual void update(::RenderParams& renderParams) /*override*/;

    virtual void renderPreparation(::RenderParams& renderParams) /*override*/;

    virtual ~ParticleInitialExpressionComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCFOLD void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCFOLD void $setInitialState(::ParticleSystem::CommonParticle& particle, ::RenderParams& renderParams);

    MCAPI void $update(::RenderParams& renderParams);

    MCAPI void $renderPreparation(::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
