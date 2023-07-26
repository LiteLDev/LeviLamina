/**
 * @file  SchedulerDefinition.hpp
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
     * @symbol  ??0SchedulerDefinition\@\@QEAA\@XZ
     */
    MCAPI SchedulerDefinition();
    /**
     * @symbol  ?initialize\@SchedulerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSchedulerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class SchedulerComponent &) const;
    /**
     * @symbol  ?setMaxDelayTicks\@SchedulerDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setMaxDelayTicks(float const &);
    /**
     * @symbol  ?setMinDelayTicks\@SchedulerDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setMinDelayTicks(float const &);
    /**
     * @symbol  ?buildSchema\@SchedulerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSchedulerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SchedulerDefinition>> &);

};