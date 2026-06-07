#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class HitResult;
class MobEffect;
class MobEffectInstance;
class Potion;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SplashPotionEffectSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPotionEffect;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SplashPotionEffectSubcomponent() /*override*/;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SplashPotionEffectSubcomponent();

    MCAPI void applyMobEffects(
        ::MobEffectInstance const&               effectInst,
        ::std::vector<::Actor*> const&           actors,
        ::Actor&                                 projectile,
        ::std::shared_ptr<::Potion const> const& splashRange,
        float                                    collisionMargin,
        float                                    effect,
        ::MobEffect*                             res,
        ::HitResult&                             aux,
        int                                      currVer,
        ::BaseGameVersion const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCFOLD char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
