#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class DamageSensorComponent;
class EntityContext;
struct DamageSensorTrigger;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DamageSensorTrigger>> mTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addDamageSensorTrigger(::DamageSensorTrigger const& trigger);

    MCNAPI void initialize(::EntityContext& entity, ::DamageSensorComponent& component) const;

    MCNAPI void uninitialize(::EntityContext& entity, ::DamageSensorComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DamageSensorDefinition>>& root
    );
    // NOLINTEND
};
