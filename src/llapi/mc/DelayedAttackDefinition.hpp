/**
 * @file  DelayedAttackDefinition.hpp
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
 * @brief MC class DelayedAttackDefinition.
 *
 */
class DelayedAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKDEFINITION
public:
    class DelayedAttackDefinition& operator=(class DelayedAttackDefinition const &) = delete;
    DelayedAttackDefinition(class DelayedAttackDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0DelayedAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI DelayedAttackDefinition();
    /**
     * @symbol  ?initialize\@DelayedAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDelayedAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DelayedAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@DelayedAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDelayedAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DelayedAttackDefinition>> &);

};