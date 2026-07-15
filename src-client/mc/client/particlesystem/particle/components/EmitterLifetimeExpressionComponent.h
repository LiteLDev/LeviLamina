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

class EmitterLifetimeExpressionComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mActivationExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mExpirationExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const&) /*override*/;

    virtual bool emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&) /*override*/;

    virtual bool
    hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&) /*override*/;

    virtual bool isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ParticleSystem
