#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterShapeSphereComponent.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
class Vec3;
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterShapeDiscComponent : public ::ParticleSystem::EmitterShapeSphereComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]> mPlaneNormal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void applyPreNormalizationModifiers(::Vec3& direction, ::RenderParams& renderParams) /*override*/;

    virtual ~EmitterShapeDiscComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $applyPreNormalizationModifiers(::Vec3& direction, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
