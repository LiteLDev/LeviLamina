#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    ::ll::UntypedStorage<4, 4> mUnk10cc00;
    // NOLINTEND

public:
    // prevent constructor by default
    SplashPotionEffectSubcomponent& operator=(SplashPotionEffectSubcomponent const&);
    SplashPotionEffectSubcomponent(SplashPotionEffectSubcomponent const&);
    SplashPotionEffectSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplashPotionEffectSubcomponent() /*override*/ = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value& component) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value&) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void applyMobEffects(
        ::MobEffectInstance const&               effectInst,
        ::std::vector<::Actor*> const&           actors,
        ::Actor&                                 projectile,
        ::std::shared_ptr<::Potion const> const& splashRange,
        float                                    effect,
        ::MobEffect*                             res,
        ::HitResult&                             aux,
        int
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);
    // NOLINTEND
};
