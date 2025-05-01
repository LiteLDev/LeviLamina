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

class SpawnChanceSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkbc7bf3;
    ::ll::UntypedStorage<8, 24>  mUnk477836;
    ::ll::UntypedStorage<4, 4>   mUnk535702;
    ::ll::UntypedStorage<4, 4>   mUnkd30e7b;
    ::ll::UntypedStorage<4, 4>   mUnk285961;
    ::ll::UntypedStorage<4, 4>   mUnk750033;
    ::ll::UntypedStorage<1, 1>   mUnkcaa47a;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnChanceSubcomponent& operator=(SpawnChanceSubcomponent const&);
    SpawnChanceSubcomponent(SpawnChanceSubcomponent const&);
    SpawnChanceSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnChanceSubcomponent() /*override*/ = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value& component) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value& component) const /*override*/;

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
    MCNAPI void $readfromJSON(::Json::Value& component);

    MCNAPI void $writetoJSON(::Json::Value& component) const;

    MCNAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);

    MCNAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
