#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class DouseFireSubcomponent : public ::OnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DouseFireSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value&) /*override*/;

    virtual void writetoJSON(::Json::Value&) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void douseFire(::Actor& owner, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $readfromJSON(::Json::Value&);

    MCFOLD void $writetoJSON(::Json::Value&) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
