#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class StompAttackDefinition {

public:
    // prevent constructor by default
    StompAttackDefinition& operator=(StompAttackDefinition const&) = delete;
    StompAttackDefinition(StompAttackDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0StompAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI StompAttackDefinition();
    /**
     * @symbol
     * ?buildSchema\@StompAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VStompAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class StompAttackDefinition>>&);
    /**
     * @symbol ?initialize\@StompAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVStompAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class StompAttackGoal&) const;
    // NOLINTEND
};
