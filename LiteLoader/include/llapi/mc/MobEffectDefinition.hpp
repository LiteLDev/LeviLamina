/**
 * @file  MobEffectDefinition.hpp
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
     * @hash   -773499248
     * @symbol  ??0MobEffectDefinition\@\@QEAA\@XZ
     */
    MCAPI MobEffectDefinition();
    /**
     * @symbol  ?initialize\@MobEffectDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMobEffectComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class MobEffectComponent &) const;
    /**
     * @hash   -1324552601
     * @symbol  ?setCooldownTimeInTicks\@MobEffectDefinition\@\@QEAAXAEBH\@Z
     */
    MCAPI void setCooldownTimeInTicks(int const &);
    /**
     * @hash   1488729095
     * @symbol  ?setEffectTimeInTicks\@MobEffectDefinition\@\@QEAAXAEBH\@Z
     */
    MCAPI void setEffectTimeInTicks(int const &);
    /**
     * @hash   -672287492
     * @symbol  ?setMobEffectByName\@MobEffectDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setMobEffectByName(std::string const &);
    /**
     * @hash   1497521722
     * @symbol  ?buildSchema\@MobEffectDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMobEffectDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MobEffectDefinition>> &);

//private:
    /**
     * @hash   1726547447
     * @symbol  ?_parseMobEffectId\@MobEffectDefinition\@\@CAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static int _parseMobEffectId(std::string const &);

private:

};