/**
 * @file  HarvestFarmBlockDefinition.hpp
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
     * @symbol  ??0HarvestFarmBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI HarvestFarmBlockDefinition();
    /**
     * @symbol  ?initialize\@HarvestFarmBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVHarvestFarmBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class HarvestFarmBlockGoal &) const;
    /**
     * @symbol  ?buildSchema\@HarvestFarmBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHarvestFarmBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HarvestFarmBlockDefinition>> &);

};