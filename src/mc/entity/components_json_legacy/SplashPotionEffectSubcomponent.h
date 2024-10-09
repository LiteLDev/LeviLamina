#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SplashPotionEffectSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    SplashPotionEffectSubcomponent& operator=(SplashPotionEffectSubcomponent const&);
    SplashPotionEffectSubcomponent(SplashPotionEffectSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplashPotionEffectSubcomponent();

    // vIndex: 1
    virtual void readfromJSON(class Json::Value& component, class SemVersion const&);

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent& component);

    // vIndex: 4
    virtual char const* getName();

    MCAPI SplashPotionEffectSubcomponent();

    MCAPI void applyMobEffects(
        class MobEffectInstance const&   effectInst,
        std::vector<class Actor*> const& actors,
        class Actor&                     projectile,
        std::shared_ptr<class Potion const> const&,
        float            splashRange,
        class MobEffect* effect,
        class HitResult& res,
        int              aux
    );

    // NOLINTEND
};
