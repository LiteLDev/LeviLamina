#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HurtOnConditionDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTONCONDITIONDEFINITION
public:
    HurtOnConditionDefinition& operator=(HurtOnConditionDefinition const&) = delete;
    HurtOnConditionDefinition(HurtOnConditionDefinition const&)            = delete;
    HurtOnConditionDefinition()                                            = delete;
#endif

public:
    /**
     * @symbol ?addDamageCondition\@HurtOnConditionDefinition\@\@QEAAXAEBUDamageCondition\@\@\@Z
     */
    MCAPI void addDamageCondition(struct DamageCondition const&);
    /**
     * @symbol
     * ?buildSchema\@HurtOnConditionDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHurtOnConditionDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HurtOnConditionDefinition>>&);
};
