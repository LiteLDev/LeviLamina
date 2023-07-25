#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DelayedAttackDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKDEFINITION
public:
    DelayedAttackDefinition& operator=(DelayedAttackDefinition const&) = delete;
    DelayedAttackDefinition(DelayedAttackDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0DelayedAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI DelayedAttackDefinition();
    /**
     * @symbol ?initialize\@DelayedAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDelayedAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DelayedAttackGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@DelayedAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDelayedAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DelayedAttackDefinition>>&);
};
