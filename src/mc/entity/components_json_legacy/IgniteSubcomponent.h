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

class IgniteSubcomponent : public ::OnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IgniteSubcomponent() /*override*/ = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value&) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent&) /*override*/;

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
    MCFOLD void $readfromJSON(::Json::Value&);

    MCFOLD void $writetoJSON(::Json::Value&) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);

    MCAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
