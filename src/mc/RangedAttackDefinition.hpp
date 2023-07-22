/**
 * @file  RangedAttackDefinition.hpp
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
 * @brief MC class RangedAttackDefinition.
 *
 */
class RangedAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDATTACKDEFINITION
public:
    class RangedAttackDefinition& operator=(class RangedAttackDefinition const &) = delete;
    RangedAttackDefinition(class RangedAttackDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0RangedAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI RangedAttackDefinition();
    /**
     * @symbol  ?initialize\@RangedAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRangedAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class RangedAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@RangedAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRangedAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RangedAttackDefinition>> &);

};