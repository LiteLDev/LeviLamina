/**
 * @file  MobEffectDefinition.hpp
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
 * @brief MC class MobEffectDefinition.
 *
 */
class MobEffectDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTDEFINITION
public:
    class MobEffectDefinition& operator=(class MobEffectDefinition const &) = delete;
    MobEffectDefinition(class MobEffectDefinition const &) = delete;
#endif

public:
    /**
     * @hash   157871200
     * @symbol ??0MobEffectDefinition@@QEAA@XZ
     */
    MCAPI MobEffectDefinition();
    /**
     * @hash   -901978427
     * @symbol ?initialize@MobEffectDefinition@@QEAAXAEAVEntityContext@@AEAVMobEffectComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class MobEffectComponent &);
    /**
     * @hash   -393212905
     * @symbol ?setCooldownTimeInTicks@MobEffectDefinition@@QEAAXAEBH@Z
     */
    MCAPI void setCooldownTimeInTicks(int const &);
    /**
     * @hash   -1874898505
     * @symbol ?setEffectTimeInTicks@MobEffectDefinition@@QEAAXAEBH@Z
     */
    MCAPI void setEffectTimeInTicks(int const &);
    /**
     * @hash   259052204
     * @symbol ?setMobEffectByName@MobEffectDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setMobEffectByName(std::string const &);
    /**
     * @hash   -1866075126
     * @symbol ?buildSchema@MobEffectDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMobEffectDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MobEffectDefinition>> &);

//private:
    /**
     * @hash   -1637049401
     * @symbol ?_parseMobEffectId@MobEffectDefinition@@CAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static int _parseMobEffectId(std::string const &);

private:

};