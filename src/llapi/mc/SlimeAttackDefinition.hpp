/**
 * @file  SlimeAttackDefinition.hpp
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
 * @brief MC class SlimeAttackDefinition.
 *
 */
class SlimeAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEATTACKDEFINITION
public:
    class SlimeAttackDefinition& operator=(class SlimeAttackDefinition const &) = delete;
    SlimeAttackDefinition(class SlimeAttackDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SlimeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeAttackDefinition();
    /**
     * @symbol  ?initialize\@SlimeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SlimeAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@SlimeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeAttackDefinition>> &);

};