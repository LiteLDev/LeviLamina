#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERDEFINITION
public:
    SchedulerDefinition& operator=(SchedulerDefinition const&) = delete;
    SchedulerDefinition(SchedulerDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SchedulerDefinition\@\@QEAA\@XZ
     */
    MCAPI SchedulerDefinition();
    /**
     * @symbol ?initialize\@SchedulerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSchedulerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SchedulerComponent&) const;
    /**
     * @symbol ?setMaxDelayTicks\@SchedulerDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setMaxDelayTicks(float const&);
    /**
     * @symbol ?setMinDelayTicks\@SchedulerDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setMinDelayTicks(float const&);
    /**
     * @symbol
     * ?buildSchema\@SchedulerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSchedulerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SchedulerDefinition>>&);
};
