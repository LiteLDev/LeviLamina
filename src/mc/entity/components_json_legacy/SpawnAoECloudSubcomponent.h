#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SpawnAoECloudSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              mPotionId;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mDuration;
    ::ll::TypedStorage<4, 4, ::ParticleType>   mParticle;
    ::ll::TypedStorage<4, 4, int>              mReapplicationDelay;
    ::ll::TypedStorage<4, 4, float>            mRadius;
    ::ll::TypedStorage<4, 4, float>            mRadiusOnUse;
    ::ll::TypedStorage<4, 16, ::mce::Color>    mParticleColor;
    ::ll::TypedStorage<1, 1, bool>             mAffectOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnAoECloudSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent&) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);

    MCAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
