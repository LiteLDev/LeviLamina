#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EnvironmentSensorDefinition {
public:
    // prevent constructor by default
    EnvironmentSensorDefinition& operator=(EnvironmentSensorDefinition const&);
    EnvironmentSensorDefinition(EnvironmentSensorDefinition const&);
    EnvironmentSensorDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addEnvironmentTrigger(class ActorDefinitionTrigger const& trigger);

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EnvironmentSensorDefinition>>& root
    );

    // NOLINTEND
};
