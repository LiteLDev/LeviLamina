#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VariableMaxAutoStepDefinition {
public:
    // prevent constructor by default
    VariableMaxAutoStepDefinition& operator=(VariableMaxAutoStepDefinition const&);
    VariableMaxAutoStepDefinition(VariableMaxAutoStepDefinition const&);
    VariableMaxAutoStepDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, struct VariableMaxAutoStepComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VariableMaxAutoStepDefinition>>& root
    );

    // NOLINTEND
};
