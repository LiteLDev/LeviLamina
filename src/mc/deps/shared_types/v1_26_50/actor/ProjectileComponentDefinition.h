#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_26_50/actor/OnHitCommandsStorage.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct ProjectileComponentDefinition {
public:
    // ProjectileComponentDefinition inner types define
    enum class ProjectileAnchor : uchar {
        Origin    = 0,
        EyeHeight = 1,
        Middle    = 2,
    };

    enum class ShouldBounce : uchar {
        No              = 0,
        IfInvulnerable  = 1,
        IfNoDamageDealt = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>        mProjectileOffset;
    ::ll::TypedStorage<4, 4, float>          mProjectilePower;
    ::ll::TypedStorage<1, 1, bool>           mLightningOnHit;
    ::ll::TypedStorage<4, 4, float>          mGravity;
    ::ll::TypedStorage<4, 4, float>          mUpwardsAngleOffset;
    ::ll::TypedStorage<4, 4, ::ParticleType> mHitParticle;
    ::ll::TypedStorage<4, 4, float>          mUncertaintyBase;
    ::ll::TypedStorage<4, 4, float>          mUncertaintyMultiplier;
    ::ll::TypedStorage<4, 4, float>          mOnFireTime;
    ::ll::TypedStorage<4, 4, int>            mPotionEffect;
    ::ll::TypedStorage<4, 4, float>          mSplashRange;
    ::ll::TypedStorage<1, 1, bool>           mCatchFire;
    ::ll::TypedStorage<4, 4, float>          mInertiaMod;
    ::ll::TypedStorage<4, 4, float>          mLiquidInertia;
    ::ll::TypedStorage<8, 32, ::std::string> mHitEntitySound;
    ::ll::TypedStorage<8, 32, ::std::string> mHitGroundSound;
    ::ll::TypedStorage<8, 32, ::std::string> mShootSound;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::ProjectileComponentDefinition::ProjectileAnchor> mAnchor;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_50::OnHitCommandsStorage>                           mOnHitCommands;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>                       mOnHitEvent;
    ::ll::TypedStorage<1, 1, bool>                                                                     mIsDangerous;
    ::ll::TypedStorage<1, 1, bool>                                                                     mReflectOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                                     mDestroyOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                                     mStopOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                                 mCritParticleOnHurt;
    ::ll::TypedStorage<1, 1, bool>                                                                 mShootTarget;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsHoming;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::ProjectileComponentDefinition::ShouldBounce> mShouldBounce;
    ::ll::TypedStorage<1, 1, bool>                                                                 mHitWater;
    ::ll::TypedStorage<1, 1, bool>                                                                 mMultipleHits;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<1>>>                          mIgnoredEntities;
    ::ll::TypedStorage<1, 1, bool>                                                                 mHitNearestPassenger;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsolatedPhysics;
    ::ll::TypedStorage<4, 4, float> mReflectImmunityInSeconds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProjectileComponentDefinition();

    MCAPI ProjectileComponentDefinition(::SharedTypes::v1_26_50::ProjectileComponentDefinition&&);

    MCAPI ProjectileComponentDefinition(::SharedTypes::v1_26_50::ProjectileComponentDefinition const&);

    MCAPI ::SharedTypes::v1_26_50::ProjectileComponentDefinition&
    operator=(::SharedTypes::v1_26_50::ProjectileComponentDefinition&&);

    MCAPI ::SharedTypes::v1_26_50::ProjectileComponentDefinition&
    operator=(::SharedTypes::v1_26_50::ProjectileComponentDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_50::ProjectileComponentDefinition const&) const;

    MCAPI ~ProjectileComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& DEFAULT_OFFSET();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_50::ProjectileComponentDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_50::ProjectileComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
