#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol: ?initialize@VariableMaxAutoStepDefinition@@QEBAXAEAVEntityContext@@AEAUVariableMaxAutoStepComponent@@@Z
    MCAPI void initialize(class EntityContext&, struct VariableMaxAutoStepComponent& component) const;

    // symbol:
    // ?buildSchema@VariableMaxAutoStepDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VVariableMaxAutoStepDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class VariableMaxAutoStepDefinition>>& root
    );

    // NOLINTEND
};
