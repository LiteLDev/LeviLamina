/**
 * @file  ChargeAttackDefinition.hpp
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
 * @brief MC class ChargeAttackDefinition.
 *
 */
class ChargeAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEATTACKDEFINITION
public:
    class ChargeAttackDefinition& operator=(class ChargeAttackDefinition const &) = delete;
    ChargeAttackDefinition(class ChargeAttackDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ChargeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI ChargeAttackDefinition();
    /**
     * @symbol  ?initialize\@ChargeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVChargeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ChargeAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@ChargeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VChargeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeAttackDefinition>> &);

};