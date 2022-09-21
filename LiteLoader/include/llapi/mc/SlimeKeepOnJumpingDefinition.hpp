/**
 * @file  MC/SlimeKeepOnJumpingDefinition.hpp
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
 * @brief MC class SlimeKeepOnJumpingDefinition.
 *
 */
class SlimeKeepOnJumpingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEKEEPONJUMPINGDEFINITION
public:
    class SlimeKeepOnJumpingDefinition& operator=(class SlimeKeepOnJumpingDefinition const &) = delete;
    SlimeKeepOnJumpingDefinition(class SlimeKeepOnJumpingDefinition const &) = delete;
#endif

public:
    /**
     * @hash   373736439
     * @symbol ??0SlimeKeepOnJumpingDefinition@@QEAA@XZ
     */
    MCAPI SlimeKeepOnJumpingDefinition();
    /**
     * @hash   629468087
     * @symbol ?initialize@SlimeKeepOnJumpingDefinition@@QEAAXAEAVEntityContext@@AEAVSlimeKeepOnJumpingGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SlimeKeepOnJumpingGoal &);
    /**
     * @hash   -2106307497
     * @symbol ?buildSchema@SlimeKeepOnJumpingDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSlimeKeepOnJumpingDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeKeepOnJumpingDefinition>> &);

};