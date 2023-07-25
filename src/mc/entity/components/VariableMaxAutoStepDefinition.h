#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VariableMaxAutoStepDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIABLEMAXAUTOSTEPDEFINITION
public:
    VariableMaxAutoStepDefinition& operator=(VariableMaxAutoStepDefinition const&) = delete;
    VariableMaxAutoStepDefinition(VariableMaxAutoStepDefinition const&)            = delete;
    VariableMaxAutoStepDefinition()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VariableMaxAutoStepDefinition\@\@QEBAXAEAVEntityContext\@\@AEAUVariableMaxAutoStepComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, struct VariableMaxAutoStepComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@VariableMaxAutoStepDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VVariableMaxAutoStepDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class VariableMaxAutoStepDefinition>>&);
};
