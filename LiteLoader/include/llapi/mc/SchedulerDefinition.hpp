/**
 * @file  MC/SchedulerDefinition.hpp
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
 * @brief MC class SchedulerDefinition.
 *
 */
class SchedulerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERDEFINITION
public:
    class SchedulerDefinition& operator=(class SchedulerDefinition const &) = delete;
    SchedulerDefinition(class SchedulerDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -2072461526
     * @symbol ??0SchedulerDefinition@@QEAA@XZ
     */
    MCAPI SchedulerDefinition();
    /**
     * @hash   -1270009691
     * @symbol ?initialize@SchedulerDefinition@@QEAAXAEAVEntityContext@@AEAVSchedulerComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SchedulerComponent &);
    /**
     * @hash   -561490247
     * @symbol ?setMaxDelayTicks@SchedulerDefinition@@QEAAXAEBM@Z
     */
    MCAPI void setMaxDelayTicks(float const &);
    /**
     * @hash   1436149785
     * @symbol ?setMinDelayTicks@SchedulerDefinition@@QEAAXAEBM@Z
     */
    MCAPI void setMinDelayTicks(float const &);
    /**
     * @hash   -2046959154
     * @symbol ?buildSchema@SchedulerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSchedulerDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SchedulerDefinition>> &);

};