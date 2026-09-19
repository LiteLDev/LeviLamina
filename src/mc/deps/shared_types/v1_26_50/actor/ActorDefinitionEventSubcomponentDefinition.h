#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileOnHitSubcomponent.h"

namespace SharedTypes::v1_26_50 {

struct ActorDefinitionEventSubcomponentDefinition : public ::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mAffectShooter;
    ::ll::TypedStorage<1, 1, bool>                                               mAffectProjectile;
    ::ll::TypedStorage<1, 1, bool>                                               mAffectTarget;
    ::ll::TypedStorage<1, 1, bool>                                               mAffectSplashArea;
    ::ll::TypedStorage<4, 4, float>                                              mSplashArea;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mTrigger;
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
