/**
 * @file  NearestAttackableTargetDefinition.hpp
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
 * @brief MC class NearestAttackableTargetDefinition.
 *
 */
class NearestAttackableTargetDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETDEFINITION
public:
    class NearestAttackableTargetDefinition& operator=(class NearestAttackableTargetDefinition const &) = delete;
    NearestAttackableTargetDefinition(class NearestAttackableTargetDefinition const &) = delete;
    NearestAttackableTargetDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NearestAttackableTargetDefinition();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1633337009
     * @vftbl  2
     * @symbol ?validate@NearestAttackableTargetDefinition@@UEAA_NAEAVMob@@@Z
     */
    virtual bool validate(class Mob &);
    /**
     * @hash   496204315
     * @symbol ?initialize@NearestAttackableTargetDefinition@@QEAAXAEAVEntityContext@@AEAVNearestAttackableTargetGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class NearestAttackableTargetGoal &);
    /**
     * @hash   -945808635
     * @symbol ?buildSchema@NearestAttackableTargetDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VNearestAttackableTargetDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NearestAttackableTargetDefinition>> &);

};