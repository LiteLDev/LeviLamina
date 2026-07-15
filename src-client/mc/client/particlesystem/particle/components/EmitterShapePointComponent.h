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

class EmitterShapePointComponent : public ::ParticleSystem::EmitterShapeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]> mOffsetExpr;
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]> mDirectionExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const&) /*override*/;

    virtual void getNextParticleSpawnOffsetAndDirection(
        ::Vec3&,
        ::Vec3&,
        ::ParticleSystem::ComponentAccessParticleEmitter const&,
        ::RenderParams&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ParticleSystem
