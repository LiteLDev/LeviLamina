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
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const&) /*override*/;

    virtual void setupInitial(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&) /*override*/;

    virtual void update(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ParticleSystem
