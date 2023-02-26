/**
 * @file  GuardianAttackDefinition.hpp
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
 * @brief MC class GuardianAttackDefinition.
 *
 */
class GuardianAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANATTACKDEFINITION
public:
    class GuardianAttackDefinition& operator=(class GuardianAttackDefinition const &) = delete;
    GuardianAttackDefinition(class GuardianAttackDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GuardianAttackDefinition();
    /**
     * @vftbl  1
     * @symbol  ?validateMobType\@GuardianAttackDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob &) const;
    /**
     * @symbol  ??0GuardianAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI GuardianAttackDefinition();
    /**
     * @symbol  ?initialize\@GuardianAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGuardianAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class GuardianAttackGoal &) const;
    /**
     * @symbol  ?buildSchema\@GuardianAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGuardianAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GuardianAttackDefinition>> &);

};