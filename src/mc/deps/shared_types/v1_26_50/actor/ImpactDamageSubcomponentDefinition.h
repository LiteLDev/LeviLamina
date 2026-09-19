#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileOnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct ImpactDamageSubcomponentDefinition : public ::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent {
public:
    // ImpactDamageSubcomponentDefinition inner types define
    enum class DifficultyRandomization : uchar {
        None           = 0,
        Additive       = 1,
        Multiplicative = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mProjectileDamage;
    ::ll::TypedStorage<8, 32, ::std::string>            mFilter;
    ::ll::TypedStorage<1, 1, bool>                      mCatchFire;
    ::ll::TypedStorage<1, 1, bool>                      mChanneling;
    ::ll::TypedStorage<1, 1, bool>                      mKnockback;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::ImpactDamageSubcomponentDefinition::DifficultyRandomization>
                                    mDifficultyRandomization;
    ::ll::TypedStorage<1, 1, bool>  mCeilPreCriticalDamage;
    ::ll::TypedStorage<1, 1, bool>  mDestroyOnHit;
    ::ll::TypedStorage<1, 1, bool>  mSetLastHurtRequiresDamage;
    ::ll::TypedStorage<1, 1, bool>  mDestroyOnHitRequiresDamage;
    ::ll::TypedStorage<1, 1, bool>  mApplyKnockbackToBlockingTargets;
    ::ll::TypedStorage<4, 4, int>   mMaxCriticalDamage;
    ::ll::TypedStorage<4, 4, int>   mMinCriticalDamage;
    ::ll::TypedStorage<4, 4, float> mPowerMultiplier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view const getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_50::ImpactDamageSubcomponentDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view const $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
