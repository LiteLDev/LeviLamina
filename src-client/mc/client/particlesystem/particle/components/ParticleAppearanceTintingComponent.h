#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleAppearanceComponentBase.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct ColorFrame; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleAppearanceTintingComponent : public ::ParticleSystem::ParticleAppearanceComponentBase {
public:
    // ParticleAppearanceTintingComponent inner types declare
    // clang-format off
    struct ParticleColors;
    // clang-format on

    // ParticleAppearanceTintingComponent inner types define
    struct ParticleColors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString const>              mName;
        ::ll::TypedStorage<8, 32, ::std::string const>               mAppearanceTintColors;
        ::ll::TypedStorage<8, 64, ::std::array<::ExpressionNode, 4>> mOriginalColor;
        ::ll::TypedStorage<1, 1, bool const>                         mAlpha;
        ::ll::TypedStorage<4, 16, float[4]>                          mCol;
        ::ll::TypedStorage<4, 16, float[4]>                          mParticleColorFloat;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ParticleAppearanceTintingComponent::ParticleColors>>
                                                                           mParticleColors;
    ::ll::TypedStorage<1, 1, bool const>                                   mAlpha;
    ::ll::TypedStorage<4, 16, float[4]>                                    mCol;
    ::ll::TypedStorage<4, 16, float[4]>                                    mParticleColorFloat;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ColorFrame>> mColorFrames;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                            mInterpolantExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    ) /*override*/;

    virtual ~ParticleAppearanceTintingComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _initColorNode(::std::array<::ExpressionNode, 4>& node);

    MCAPI void _parseColorBlock(::ConstDeserializeDataParams const& deserializeDataParams, float value);

    MCAPI void _parseGradientBlock(::ConstDeserializeDataParams const& deserializeDataParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
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
