#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol: ?addEnvironmentTrigger@EnvironmentSensorDefinition@@QEAAXAEBVActorDefinitionTrigger@@@Z
    MCAPI void addEnvironmentTrigger(class ActorDefinitionTrigger const& trigger);

    // symbol:
    // ?buildSchema@EnvironmentSensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VEnvironmentSensorDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EnvironmentSensorDefinition>>& root
    );

    // NOLINTEND
};
