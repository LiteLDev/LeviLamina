/**
 * @file  MeleeAttackDefinition.hpp
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
 * @brief MC class MeleeAttackDefinition.
 *
 */
class MeleeAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEATTACKDEFINITION
public:
    class MeleeAttackDefinition& operator=(class MeleeAttackDefinition const &) = delete;
    MeleeAttackDefinition(class MeleeAttackDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0MeleeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI MeleeAttackDefinition();
    /**
     * @symbol  ?initialize\@MeleeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMeleeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class MeleeAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@MeleeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMeleeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeAttackDefinition>> &);

};