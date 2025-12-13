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

class CatchFireSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb67512;
    ::ll::UntypedStorage<1, 1> mUnk5a048d;
    // NOLINTEND

public:
    // prevent constructor by default
    CatchFireSubcomponent& operator=(CatchFireSubcomponent const&);
    CatchFireSubcomponent(CatchFireSubcomponent const&);
    CatchFireSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatchFireSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $readfromJSON(::Json::Value& component);

    MCNAPI void $writetoJSON(::Json::Value& component) const;

    MCNAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCNAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
