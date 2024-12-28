#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/MobEffectSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ArrowEffectSubcomponent : public ::MobEffectSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnka55370;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrowEffectSubcomponent& operator=(ArrowEffectSubcomponent const&);
    ArrowEffectSubcomponent(ArrowEffectSubcomponent const&);
    ArrowEffectSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void readfromJSON(::Json::Value& component) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;

    // vIndex: 0
    virtual ~ArrowEffectSubcomponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
