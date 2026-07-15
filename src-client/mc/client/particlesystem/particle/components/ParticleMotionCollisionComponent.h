#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleMotionComponentBase.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleMotionCollisionComponent : public ::ParticleSystem::ParticleMotionComponentBase {
public:
    // ParticleMotionCollisionComponent inner types declare
    // clang-format off
    struct SweepResult;
    // clang-format on

    // ParticleMotionCollisionComponent inner types define
    struct SweepResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mFrom;
        ::ll::TypedStorage<4, 12, ::Vec3> mTo;
        ::ll::TypedStorage<4, 12, ::Vec3> mVelocity;
        ::ll::TypedStorage<4, 12, ::Vec3> mIntersectionNorm;
        ::ll::TypedStorage<1, 1, bool>    mHit;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                  mCollisionEnabledExpr;
    ::ll::TypedStorage<4, 4, float>                                              mCollisionDrag;
    ::ll::TypedStorage<4, 4, float>                                              mCoefficientOfRestitution;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mCollisionRadius;
    ::ll::TypedStorage<1, 1, bool>                                               mExpireOnContact;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::HashedString>>> mCollisionEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void updateParticleMotion(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams,
        ::std::chrono::nanoseconds const&                 dt
    ) /*override*/;

    virtual int getSortOrderNumber() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $updateParticleMotion(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams,
        ::std::chrono::nanoseconds const&                 dt
    );

    MCFOLD int $getSortOrderNumber() const;
    // NOLINTEND
};

} // namespace ParticleSystem
