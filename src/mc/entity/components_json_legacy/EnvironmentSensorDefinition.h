#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EnvironmentSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addEnvironmentTrigger(::ActorDefinitionTrigger const& trigger);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EnvironmentSensorDefinition>>& root
    );
    // NOLINTEND
};
