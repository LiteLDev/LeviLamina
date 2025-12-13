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
    virtual ~SplashPotionEffectSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value&) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void applyMobEffects(
        ::MobEffectInstance const&     effectInst,
        ::std::vector<::Actor*> const& actors,
        ::Actor&                       projectile,
        ::std::shared_ptr<::Potion const> const&,
        float                    splashRange,
        float                    collisionMargin,
        ::MobEffect*             effect,
        ::HitResult&             res,
        int                      aux,
        ::BaseGameVersion const& currVer
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);


    // NOLINTEND
};
