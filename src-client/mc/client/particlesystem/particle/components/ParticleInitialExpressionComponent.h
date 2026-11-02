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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCNAPI void $setInitialState(::ParticleSystem::CommonParticle& particle, ::RenderParams& renderParams);

    MCNAPI void $update(::RenderParams& renderParams);

    MCNAPI void $renderPreparation(::RenderParams& renderParams);
    // NOLINTEND
};

} // namespace ParticleSystem
