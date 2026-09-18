#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/effect/EffectDuration.h"
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileOnHitSubcomponent.h"

namespace SharedTypes::v1_26_50 {

struct SpawnAoECloudSubcomponentDefinition : public ::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mPotionId;
    ::ll::TypedStorage<4, 4, float>                                 mRadius;
    ::ll::TypedStorage<4, 4, float>                                 mRadiusOnUse;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EffectDuration> mDuration;
    ::ll::TypedStorage<4, 4, ::ParticleType>                        mParticle;
    ::ll::TypedStorage<1, 1, bool>                                  mAffectOwner;
    ::ll::TypedStorage<4, 4, int>                                   mReapplicationDelay;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view const getName() const /*override*/;
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
