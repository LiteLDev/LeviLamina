/**
 * @file  SlimeFloatDefinition.hpp
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
 * @brief MC class SlimeFloatDefinition.
 *
 */
class SlimeFloatDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEFLOATDEFINITION
public:
    class SlimeFloatDefinition& operator=(class SlimeFloatDefinition const &) = delete;
    SlimeFloatDefinition(class SlimeFloatDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -18137389
     * @symbol ??0SlimeFloatDefinition@@QEAA@XZ
     */
    MCAPI SlimeFloatDefinition();
    /**
     * @hash   -43428233
     * @symbol ?initialize@SlimeFloatDefinition@@QEAAXAEAVEntityContext@@AEAVSlimeFloatGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SlimeFloatGoal &);
    /**
     * @hash   -735171433
     * @symbol ?buildSchema@SlimeFloatDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSlimeFloatDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeFloatDefinition>> &);

};