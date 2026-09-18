#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
namespace SharedTypes::v1_26_50 { struct ProjectileOnHitSubcomponent; }
// clang-format on

class TeleportToSubcomponent : public ::OnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initFromDefinition(::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent const&) /*override*/;

    virtual void writetoJSON(::Json::Value&) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initFromDefinition(::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent const&);

    MCFOLD void $writetoJSON(::Json::Value&) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName() const;


    // NOLINTEND
};
