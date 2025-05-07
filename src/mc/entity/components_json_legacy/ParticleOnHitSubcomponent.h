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
    ::ll::UntypedStorage<8, 56> mUnk4e61de;
    ::ll::UntypedStorage<4, 4>  mUnk46defb;
    ::ll::UntypedStorage<4, 4>  mUnk50b2c7;
    ::ll::UntypedStorage<1, 1>  mUnkd77bcf;
    ::ll::UntypedStorage<1, 1>  mUnk946ea2;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $readfromJSON(::Json::Value& value);

    MCNAPI void $writetoJSON(::Json::Value& component) const;

    MCNAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCNAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
