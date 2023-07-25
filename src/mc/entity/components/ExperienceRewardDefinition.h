#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExperienceRewardDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDDEFINITION
public:
    ExperienceRewardDefinition& operator=(ExperienceRewardDefinition const&) = delete;
    ExperienceRewardDefinition(ExperienceRewardDefinition const&)            = delete;
    ExperienceRewardDefinition()                                             = delete;
#endif

public:
    /**
     * @symbol ?addBredExpressionNode\@ExperienceRewardDefinition\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addBredExpressionNode(class ExpressionNode const&);
    /**
     * @symbol ?addDeathExpressionNode\@ExperienceRewardDefinition\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addDeathExpressionNode(class ExpressionNode const&);
    /**
     * @symbol ?initialize\@ExperienceRewardDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExperienceRewardComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ExperienceRewardComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@ExperienceRewardDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExperienceRewardDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>>&);
};
