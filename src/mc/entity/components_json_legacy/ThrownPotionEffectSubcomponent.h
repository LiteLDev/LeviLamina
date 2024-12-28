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
    // prevent constructor by default
    ThrownPotionEffectSubcomponent& operator=(ThrownPotionEffectSubcomponent const&);
    ThrownPotionEffectSubcomponent(ThrownPotionEffectSubcomponent const&);
    ThrownPotionEffectSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void writetoJSON(::Json::Value&) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;

    // vIndex: 0
    virtual ~ThrownPotionEffectSubcomponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writetoJSON(::Json::Value&) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
