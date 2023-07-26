/**
 * @file  ExperienceRewardDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceRewardDefinition.
 *
 */
class ExperienceRewardDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDDEFINITION
public:
    class ExperienceRewardDefinition& operator=(class ExperienceRewardDefinition const &) = delete;
    ExperienceRewardDefinition(class ExperienceRewardDefinition const &) = delete;
    ExperienceRewardDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addBredExpressionNode\@ExperienceRewardDefinition\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addBredExpressionNode(class ExpressionNode const &);
    /**
     * @symbol  ?addDeathExpressionNode\@ExperienceRewardDefinition\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addDeathExpressionNode(class ExpressionNode const &);
    /**
     * @symbol  ?initialize\@ExperienceRewardDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExperienceRewardComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ExperienceRewardComponent &) const;
    /**
     * @symbol  ?buildSchema\@ExperienceRewardDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExperienceRewardDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>> &);

};