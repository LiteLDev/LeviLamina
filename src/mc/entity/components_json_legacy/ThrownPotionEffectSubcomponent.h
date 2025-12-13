#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/SplashPotionEffectSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ThrownPotionEffectSubcomponent : public ::SplashPotionEffectSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writetoJSON(::Json::Value&) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;

    virtual ~ThrownPotionEffectSubcomponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writetoJSON(::Json::Value&) const;

    MCNAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCNAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
