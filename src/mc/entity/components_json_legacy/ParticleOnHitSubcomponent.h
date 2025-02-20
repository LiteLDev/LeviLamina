#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ParticleOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk46defb;
    ::ll::UntypedStorage<1, 1> mUnkd77bcf;
    ::ll::UntypedStorage<1, 1> mUnk946ea2;
    ::ll::UntypedStorage<4, 4> mUnk50b2c7;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleOnHitSubcomponent& operator=(ParticleOnHitSubcomponent const&);
    ParticleOnHitSubcomponent(ParticleOnHitSubcomponent const&);
    ParticleOnHitSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleOnHitSubcomponent() /*override*/ = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value& value) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& value);

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
