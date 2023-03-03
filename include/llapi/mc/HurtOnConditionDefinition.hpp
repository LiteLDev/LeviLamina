/**
 * @file  HurtOnConditionDefinition.hpp
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
 * @brief MC class HurtOnConditionDefinition.
 *
 */
class HurtOnConditionDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTONCONDITIONDEFINITION
public:
    class HurtOnConditionDefinition& operator=(class HurtOnConditionDefinition const &) = delete;
    HurtOnConditionDefinition(class HurtOnConditionDefinition const &) = delete;
    HurtOnConditionDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addDamageCondition\@HurtOnConditionDefinition\@\@QEAAXAEBUDamageCondition\@\@\@Z
     */
    MCAPI void addDamageCondition(struct DamageCondition const &);
    /**
     * @symbol  ?buildSchema\@HurtOnConditionDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHurtOnConditionDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HurtOnConditionDefinition>> &);

};