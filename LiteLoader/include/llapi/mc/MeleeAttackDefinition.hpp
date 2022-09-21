/**
 * @file  MC/MeleeAttackDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   796421835
     * @symbol ??0MeleeAttackDefinition@@QEAA@XZ
     */
    MCAPI MeleeAttackDefinition();
    /**
     * @hash   -421997275
     * @symbol ?initialize@MeleeAttackDefinition@@QEAAXAEAVEntityContext@@AEAVMeleeAttackGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class MeleeAttackGoal &);
    /**
     * @hash   1882129471
     * @symbol ?buildSchema@MeleeAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMeleeAttackDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeAttackDefinition>> &);

};