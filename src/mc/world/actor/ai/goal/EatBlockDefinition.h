#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EatBlockDefinition {

public:
    // prevent constructor by default
    EatBlockDefinition& operator=(EatBlockDefinition const&) = delete;
    EatBlockDefinition(EatBlockDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0EatBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI EatBlockDefinition();
    /**
     * @symbol ?addSuccessChanceExpressionNode\@EatBlockDefinition\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addSuccessChanceExpressionNode(class ExpressionNode const&);
    /**
     * @symbol
     * ?buildSchema\@EatBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEatBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatBlockDefinition>>&);
    /**
     * @symbol ?initialize\@EatBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVEatBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class EatBlockGoal&) const;
    // NOLINTEND
};
