#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterShapeComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
class Vec3;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterShapeSphereComponent : public ::ParticleSystem::EmitterShapeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]> mOffsetExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>    mRadiusExpr;
    ::ll::TypedStorage<1, 1, bool>                 mSurfaceOnly;
    ::ll::TypedStorage<1, 1, bool>                 mDirectionInwards;
    ::ll::TypedStorage<1, 1, bool>                 mDirectionOutwards;
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]> mDirectionExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void getNextParticleSpawnOffsetAndDirection(
        ::Vec3&                                                 offset,
        ::Vec3&                                                 direction,
        ::ParticleSystem::ComponentAccessParticleEmitter const& emitter,
        ::RenderParams&                                         renderParams
    ) /*override*/;

    virtual void applyPreNormalizationModifiers(::Vec3&, ::RenderParams&);

    virtual ~EmitterShapeSphereComponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $getNextParticleSpawnOffsetAndDirection(
        ::Vec3&                                                 offset,
        ::Vec3&                                                 direction,
        ::ParticleSystem::ComponentAccessParticleEmitter const& emitter,
        ::RenderParams&                                         renderParams
    );

    MCFOLD void $applyPreNormalizationModifiers(::Vec3&, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
