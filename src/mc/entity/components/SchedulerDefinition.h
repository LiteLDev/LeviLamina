#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {

public:
    // prevent constructor by default
    SchedulerDefinition& operator=(SchedulerDefinition const&) = delete;
    SchedulerDefinition(SchedulerDefinition const&)            = delete;

public:
    /**
     * @symbol ??0SchedulerDefinition\@\@QEAA\@XZ
     */
    MCAPI SchedulerDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@SchedulerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSchedulerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SchedulerComponent&) const; // NOLINT
    /**
     * @symbol ?setMaxDelayTicks\@SchedulerDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setMaxDelayTicks(float const&); // NOLINT
    /**
     * @symbol ?setMinDelayTicks\@SchedulerDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setMinDelayTicks(float const&); // NOLINT
    /**
     * @symbol
     * ?buildSchema\@SchedulerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSchedulerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class SchedulerDefinition>>&); // NOLINT
};
