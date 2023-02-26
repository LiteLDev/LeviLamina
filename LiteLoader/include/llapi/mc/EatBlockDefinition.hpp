/**
 * @file  EatBlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EatBlockDefinition.
 *
 */
class EatBlockDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATBLOCKDEFINITION
public:
    class EatBlockDefinition& operator=(class EatBlockDefinition const &) = delete;
    EatBlockDefinition(class EatBlockDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0EatBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI EatBlockDefinition();
    /**
     * @symbol  ?addSuccessChanceExpressionNode\@EatBlockDefinition\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addSuccessChanceExpressionNode(class ExpressionNode const &);
    /**
     * @symbol  ?initialize\@EatBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVEatBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class EatBlockGoal &) const;
    /**
     * @symbol  ?buildSchema\@EatBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEatBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatBlockDefinition>> &);

};