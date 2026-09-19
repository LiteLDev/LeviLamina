#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_50/actor/FreezeOnHitSubcomponentDefinition.h"
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
namespace SharedTypes::v1_26_50 { struct ProjectileOnHitSubcomponent; }
// clang-format on

class FreezeOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // FreezeOnHitSubcomponent inner types define
    using Shape = ::SharedTypes::v1_26_50::FreezeOnHitSubcomponentDefinition::Shape;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::FreezeOnHitSubcomponentDefinition::Shape> mShape;
    ::ll::TypedStorage<4, 4, float>                                                             mSize;
    ::ll::TypedStorage<1, 1, bool>                                                              mSnapToBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initFromDefinition(::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent const& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initFromDefinition(::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent const& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName() const;


    // NOLINTEND
};
