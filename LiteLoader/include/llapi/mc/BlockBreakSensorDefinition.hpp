/**
 * @file  MC/BlockBreakSensorDefinition.hpp
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
 * @brief MC class BlockBreakSensorDefinition.
 *
 */
class BlockBreakSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORDEFINITION
public:
    class BlockBreakSensorDefinition& operator=(class BlockBreakSensorDefinition const &) = delete;
    BlockBreakSensorDefinition(class BlockBreakSensorDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -856199541
     * @symbol ??0BlockBreakSensorDefinition@@QEAA@XZ
     */
    MCAPI BlockBreakSensorDefinition();
    /**
     * @hash   -679173277
     * @symbol ?initialize@BlockBreakSensorDefinition@@QEAAXAEAVEntityContext@@AEAVBlockBreakSensorComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class BlockBreakSensorComponent &);
    /**
     * @hash   831092918
     * @symbol ?buildSchema@BlockBreakSensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBlockBreakSensorDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockBreakSensorDefinition>> &);

};