#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/FlipBook.h"
#include "mc/client/particlesystem/particle/components/ParticleAppearanceBillboardBaseComponent.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace Json { class Value; }
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleAppearanceBillboardComponent : public ::ParticleSystem::ParticleAppearanceBillboardBaseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::array<::ExpressionNode, 2>> mSizeExpr;
    ::ll::TypedStorage<8, 48, ::HashedString>                    mFacing;
    ::ll::TypedStorage<8, 32, ::std::array<::ExpressionNode, 2>> mUVExpr;
    ::ll::TypedStorage<8, 32, ::std::array<::ExpressionNode, 2>> mUVSizeExpr;
    ::ll::TypedStorage<4, 8, ::Vec2>                             mAssumedTextureDimensions;
    ::ll::TypedStorage<1, 1, bool>                               mUseFlipBook;
    ::ll::TypedStorage<8, 80, ::ParticleSystem::FlipBook>        mFlipBook;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle& particle,
        ::RenderParams&                   renderParams
    ) /*override*/;

    virtual void updateEmitterAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    ) /*override*/;

    virtual ~ParticleAppearanceBillboardComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _parseFlipbook(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void _parseTextureWidthHeight(::Json::Value const& uvs);
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

    MCAPI void $updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle& particle,
        ::RenderParams&                   renderParams
    );

    MCAPI void
    $updateEmitterAppearance(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
