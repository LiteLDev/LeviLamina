/**
 * @file  MC/HarvestFarmBlockDefinition.hpp
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
 * @brief MC class HarvestFarmBlockDefinition.
 *
 */
class HarvestFarmBlockDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARVESTFARMBLOCKDEFINITION
public:
    class HarvestFarmBlockDefinition& operator=(class HarvestFarmBlockDefinition const &) = delete;
    HarvestFarmBlockDefinition(class HarvestFarmBlockDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -107710019
     * @symbol ??0HarvestFarmBlockDefinition@@QEAA@XZ
     */
    MCAPI HarvestFarmBlockDefinition();
    /**
     * @hash   -729160561
     * @symbol ?initialize@HarvestFarmBlockDefinition@@QEAAXAEAVEntityContext@@AEAVHarvestFarmBlockGoal@@@Z
     */
    MCAPI void initialize(class EntityContext &, class HarvestFarmBlockGoal &);
    /**
     * @hash   2075867855
     * @symbol ?buildSchema@HarvestFarmBlockDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHarvestFarmBlockDefinition@@@JsonUtil@@@3@@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HarvestFarmBlockDefinition>> &);

};