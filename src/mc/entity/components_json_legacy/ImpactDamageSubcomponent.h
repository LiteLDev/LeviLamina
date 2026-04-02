#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ImpactDamageSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::FloatRange> mProjectileDamage;
    ::ll::TypedStorage<4, 4, ::ActorType>  mFilter;
    ::ll::TypedStorage<1, 1, bool>         mCatchFire;
    ::ll::TypedStorage<1, 1, bool>         mChanneling;
    ::ll::TypedStorage<1, 1, bool>         mKnockback;
    ::ll::TypedStorage<1, 1, bool>         mSemiRandomDiffDamage;
    ::ll::TypedStorage<1, 1, bool>         mDestroyOnHit;
    ::ll::TypedStorage<1, 1, bool>         mRegisterLastHurtRequiresDamage;
    ::ll::TypedStorage<1, 1, bool>         mDestroyOnHitRequiresDamage;
    ::ll::TypedStorage<1, 1, bool>         mApplyKnockbackToBlockingTargets;
    ::ll::TypedStorage<4, 4, int>          mMaxCriticalDamage;
    ::ll::TypedStorage<4, 4, int>          mMinCriticalDamage;
    ::ll::TypedStorage<4, 4, float>        mPowMultiplier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImpactDamageSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
