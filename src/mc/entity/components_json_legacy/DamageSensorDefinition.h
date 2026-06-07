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
    MCAPI void addDamageSensorTrigger(::DamageSensorTrigger const& trigger);

    MCAPI void initialize(::EntityContext& entity, ::DamageSensorComponent& component) const;

    MCAPI void uninitialize(::EntityContext& entity, ::DamageSensorComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DamageSensorDefinition>>& root
    );
    // NOLINTEND
};
